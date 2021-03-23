
#ifndef included_vppinfra_freebsd_freebsd_formats_h
#define included_vppinfra_freebsd_freebsd_formats_h

/* Translate the linux defines for icmp_type to FreeBSD versions */
#define ICMP_DEST_UNREACH       ICMP_UNREACH
#define ICMP_SOURCE_QUENCH      ICMP_SOURCEQUENCH
#define ICMP_TIME_EXCEEDED      ICMP_TIMXCEED
#define ICMP_PARAMETERPROB      ICMP_PARAMPROB
#define ICMP_TIMESTAMP          ICMP_TSTAMP
#define ICMP_TIMESTAMPREPLY     ICMP_TSTAMPREPLY
#define ICMP_INFO_REQUEST       ICMP_IREQ
#define ICMP_INFO_REPLY         ICMP_IREQREPLY
#define ICMP_ADDRESS            ICMP_MASKREQ
#define ICMP_ADDRESSREPLY       ICMP_MASKREPLY

/* Translate the linux icmp_types for DEST_UNREACH to FreeBSD versions.*/
#define ICMP_NET_UNREACH        ICMP_UNREACH_NET                  /* Network Unreachable          */
#define ICMP_HOST_UNREACH       ICMP_UNREACH_HOST                 /* Host Unreachable             */
#define ICMP_PROT_UNREACH       ICMP_UNREACH_PROTOCOL             /* Protocol Unreachable         */
#define ICMP_PORT_UNREACH       ICMP_UNREACH_PORT                 /* Port Unreachable             */
#define ICMP_FRAG_NEEDED        ICMP_UNREACH_NEEDFRAG             /* Fragmentation Needed/DF set  */
#define ICMP_SR_FAILED          ICMP_UNREACH_SRCFAIL              /* Source Route failed          */
#define ICMP_NET_UNKNOWN        ICMP_UNREACH_NET_UNKNOWN
#define ICMP_HOST_UNKNOWN       ICMP_UNREACH_HOST_UNKNOWN
#define ICMP_HOST_ISOLATED      ICMP_UNREACH_ISOLATED
#define ICMP_NET_ANO            ICMP_UNREACH_NET_PROHIB
#define ICMP_HOST_ANO           ICMP_UNREACH_HOST_PROHIB
#define ICMP_NET_UNR_TOS        ICMP_UNREACH_TOSNET
#define ICMP_HOST_UNR_TOS       ICMP_UNREACH_TOSHOST
#define ICMP_PKT_FILTERED       ICMP_UNREACH_FILTER_PROHIB        /* Packet filtered */
#define ICMP_PREC_VIOLATION     ICMP_UNREACH_HOST_PRECEDENCE      /* Precedence violation */
#define ICMP_PREC_CUTOFF        ICMP_UNREACH_PRECEDENCE_CUTOFF    /* Precedence cut off */
/* Translate the linux icmp_types for ICMP_REDIRECT to FreeBSD versions. */
#define ICMP_REDIR_NET          ICMP_REDIRECT_NET                 /* Redirect Net                 */
#define ICMP_REDIR_HOST         ICMP_REDIRECT_HOST                /* Redirect Host                */
#define ICMP_REDIR_NETTOS       ICMP_REDIRECT_TOSNET              /* Redirect Net for TOS         */
#define ICMP_REDIR_HOSTTOS      ICMP_REDIRECT_TOSHOST             /* Redirect Host for TOS        */
/* Translate the linux icmp_types for ICMP_TIME_EXCEEDED to FreeBSD versions. */
#define ICMP_EXC_TTL            ICMP_TIMXCEED_INTRANS             /* TTL count exceeded           */
#define ICMP_EXC_FRAGTIME       ICMP_TIMXCEED_REASS               /* Fragment Reass time exceeded */


#define IPTOS_CLASS_MASK                0xe0
#define IPTOS_CLASS(class)              ((class) & IPTOS_CLASS_MASK)
#define IPTOS_PREC(tos)                 IPTOS_CLASS(tos)


/* ARP protocol HARDWARE identifiers. */
#define ARPHRD_NETROM   0               /* from KA9Q: NET/ROM pseudo    */
#define ARPHRD_EETHER   2               /* Experimental Ethernet        */
#define ARPHRD_AX25     3               /* AX.25 Level 2                */
#define ARPHRD_PRONET   4               /* PROnet token ring            */
#define ARPHRD_CHAOS    5               /* Chaosnet                     */
#define ARPHRD_ARCNET   7               /* ARCnet                       */
#define ARPHRD_APPLETLK 8               /* APPLEtalk                    */
#define ARPHRD_DLCI     15              /* Frame Relay DLCI             */
#define ARPHRD_ATM      19              /* ATM                          */
#define ARPHRD_METRICOM 23              /* Metricom STRIP (new IANA id) */
#define ARPHRD_EUI64    27              /* EUI-64                       */

/* Dummy types for non ARP hardware */
#define ARPHRD_SLIP     256
#define ARPHRD_CSLIP    257
#define ARPHRD_SLIP6    258
#define ARPHRD_CSLIP6   259
#define ARPHRD_RSRVD    260             /* Notional KISS type           */
#define ARPHRD_ADAPT    264
#define ARPHRD_ROSE     270
#define ARPHRD_X25      271             /* CCITT X.25                   */
#define ARPHRD_HWX25    272             /* Boards with X.25 in firmware */
#define ARPHRD_CAN      280             /* Controller Area Network      */
#define ARPHRD_PPP      512
#define ARPHRD_CISCO    513             /* Cisco HDLC                   */
#define ARPHRD_HDLC     ARPHRD_CISCO
#define ARPHRD_LAPB     516             /* LAPB                         */
#define ARPHRD_DDCMP    517             /* Digital's DDCMP protocol     */
#define ARPHRD_RAWHDLC  518             /* Raw HDLC                     */
#define ARPHRD_RAWIP    519             /* Raw IP                       */

#define ARPHRD_TUNNEL   768             /* IPIP tunnel                  */
#define ARPHRD_TUNNEL6  769             /* IP6IP6 tunnel                */
#define ARPHRD_FRAD     770             /* Frame Relay Access Device    */
#define ARPHRD_SKIP     771             /* SKIP vif                     */
#define ARPHRD_LOOPBACK 772             /* Loopback device              */
#define ARPHRD_LOCALTLK 773             /* Localtalk device             */
#define ARPHRD_FDDI     774             /* Fiber Distributed Data Interface */
#define ARPHRD_BIF      775             /* AP1000 BIF                   */
#define ARPHRD_SIT      776             /* sit0 device - IPv6-in-IPv4   */
#define ARPHRD_IPDDP    777             /* IP over DDP tunneller        */
#define ARPHRD_IPGRE    778             /* GRE over IP                  */
#define ARPHRD_PIMREG   779             /* PIMSM register interface     */
#define ARPHRD_HIPPI    780             /* High Performance Parallel Interface */
#define ARPHRD_ASH      781             /* Nexus 64Mbps Ash             */
#define ARPHRD_ECONET   782             /* Acorn Econet                 */
#define ARPHRD_IRDA     783             /* Linux-IrDA                   */
/* ARP works differently on different FC media .. so  */
#define ARPHRD_FCPP     784             /* Point to point fibrechannel  */
#define ARPHRD_FCAL     785             /* Fibrechannel arbitrated loop */
#define ARPHRD_FCPL     786             /* Fibrechannel public loop     */
#define ARPHRD_FCFABRIC 787             /* Fibrechannel fabric          */
        /* 787->799 reserved for fibrechannel media types */
#define ARPHRD_IEEE802_TR 800           /* Magic type ident for TR      */
#define ARPHRD_IEEE80211 801            /* IEEE 802.11                  */
#define ARPHRD_IEEE80211_PRISM 802      /* IEEE 802.11 + Prism2 header  */
#define ARPHRD_IEEE80211_RADIOTAP 803   /* IEEE 802.11 + radiotap header */
#define ARPHRD_IEEE802154         804
#define ARPHRD_IEEE802154_MONITOR 805   /* IEEE 802.15.4 network monitor */

#define ARPHRD_PHONET   820             /* PhoNet media type            */
#define ARPHRD_PHONET_PIPE 821          /* PhoNet pipe header           */
#define ARPHRD_CAIF     822             /* CAIF media type              */
#define ARPHRD_IP6GRE   823             /* GRE over IPv6                */
#define ARPHRD_NETLINK  824             /* Netlink header               */
#define ARPHRD_6LOWPAN  825             /* IPv6 over LoWPAN             */
#define ARPHRD_VSOCKMON 826             /* Vsock monitor header         */

#define ARPHRD_VOID       0xFFFF        /* Void type, nothing is known */
#define ARPHRD_NONE       0xFFFE        /* zero header length */


#define ETH_P_IP            ETHERTYPE_IP
#define ARPOP_RREQUEST      ARPOP_REVREQUEST
#define ARPOP_RREPLY        ARPOP_REVREPLY



/*
 *      These are the defined Ethernet Protocol ID's.
 */

#define ETH_P_LOOP      0x0060          /* Ethernet Loopback packet     */
#define ETH_P_PUP       0x0200          /* Xerox PUP packet             */
#define ETH_P_PUPAT     0x0201          /* Xerox PUP Addr Trans packet  */
#define ETH_P_X25       0x0805          /* CCITT X.25                   */
#define ETH_P_ARP       0x0806          /* Address Resolution packet    */
#define ETH_P_BPQ       0x08FF          /* G8BPQ AX.25 Ethernet Packet  [ NOT AN OFFICIALLY REGISTERED ID ] */
#define ETH_P_IEEEPUP   0x0a00          /* Xerox IEEE802.3 PUP packet */
#define ETH_P_IEEEPUPAT 0x0a01          /* Xerox IEEE802.3 PUP Addr Trans packet */

#define ETH_P_DEC       0x6000          /* DEC Assigned proto           */
#define ETH_P_DNA_DL    0x6001          /* DEC DNA Dump/Load            */
#define ETH_P_DNA_RC    0x6002          /* DEC DNA Remote Console       */
#define ETH_P_DNA_RT    0x6003          /* DEC DNA Routing              */
#define ETH_P_LAT       0x6004          /* DEC LAT                      */
#define ETH_P_DIAG      0x6005          /* DEC Diagnostics              */
#define ETH_P_CUST      0x6006          /* DEC Customer use             */
#define ETH_P_SCA       0x6007          /* DEC Systems Comms Arch       */
#define ETH_P_RARP      0x8035          /* Reverse Addr Res packet      */
#define ETH_P_ATALK     0x809B          /* Appletalk DDP                */
#define ETH_P_AARP      0x80F3          /* Appletalk AARP               */
#define ETH_P_IPX       0x8137          /* IPX over DIX                 */
#define ETH_P_IPV6      0x86DD          /* IPv6 over bluebook           */

/*
 *      Non DIX types. Won't clash for 1500 types.
 */

#define ETH_P_802_3     0x0001          /* Dummy type for 802.3 frames  */
#define ETH_P_AX25      0x0002          /* Dummy protocol id for AX.25  */
#define ETH_P_ALL       0x0003          /* Every packet (be careful!!!) */
#define ETH_P_802_2     0x0004          /* 802.2 frames                 */
#define ETH_P_SNAP      0x0005          /* Internal only                */
#define ETH_P_DDCMP     0x0006          /* DEC DDCMP: Internal only     */
#define ETH_P_WAN_PPP   0x0007          /* Dummy type for WAN PPP frames*/
#define ETH_P_PPP_MP    0x0008          /* Dummy type for PPP MP frames */
#define ETH_P_LOCALTALK 0x0009          /* Localtalk pseudo type        */
#define ETH_P_PPPTALK   0x0010          /* Dummy type for Atalk over PPP*/
#define ETH_P_TR_802_2  0x0011          /* 802.2 frames                 */
#define ETH_P_MOBITEX   0x0015          /* Mobitex (kaz@cafe.net)       */
#define ETH_P_CONTROL   0x0016          /* Card specific control frames */
#define ETH_P_IRDA      0x0017          /* Linux-IrDA                   */
#define ETH_P_ECONET    0x0018          /* Acorn Econet                 */



#define ETH_DATA_LEN    1500            /* Max. octets in payload        */

#endif