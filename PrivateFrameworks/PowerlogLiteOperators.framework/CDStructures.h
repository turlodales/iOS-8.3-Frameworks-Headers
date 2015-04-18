//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AggState {
    int state;
    double level;
    double timestamp;
};

struct CauseDurations {
    int _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
};

struct CauseSnapshot {
    int _field1;
    double _field2;
    int _field3;
};

struct _CMCallConnectPayload {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
};

struct _CMCallOrigPayload {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
};

struct _NewCMCallConnectPayload {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
};

struct _NewCMCallOrigPayload {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
};

struct _PLBasebandEventHeader {
    struct _PLBasebandMessageHeader _field1;
    unsigned int _field2;
    unsigned char _field3[8];
    unsigned char _field4;
};

struct _PLBasebandHWOnOffComponentStats {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3[2];
};

struct _PLBasebandHWStatsADSP {
    struct _PLBasebandHWOnOffComponentStats _field1;
    struct _PLBasebandHWOnOffComponentStats _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5[5];
};

struct _PLBasebandHWStatsARMPerf {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3[8];
};

struct _PLBasebandHWStatsHeader {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
};

struct _PLBasebandHWStatsMDSP {
    struct _PLBasebandHWOnOffComponentStats _field1;
    struct _PLBasebandHWOnOffComponentStats _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5[5];
};

struct _PLBasebandHWStatsRXRSSI {
    unsigned int _field1[4];
    unsigned int _field2[13];
    unsigned int _field3[13];
};

struct _PLBasebandHWStatsSystem {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3[3];
};

struct _PLBasebandHWStatsTXPower {
    unsigned int _field1[12];
};

struct _PLBasebandHWStatsUART {
    struct _PLBasebandHWOnOffComponentStats _field1;
    struct _PLBasebandHWOnOffComponentStats _field2;
};

struct _PLBasebandLogHeader {
    struct _PLBasebandMessageHeader _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned char _field4[8];
};

struct _PLBasebandMessageHeader {
    unsigned char _field1;
};

struct _PLBasebandSystemSelectionEvent {
    unsigned short _field1;
};

struct _PLMav2BasebandHWStatsRX {
    unsigned int _field1[5][4];
    unsigned int _field2[5][13];
    unsigned int _field3[5][13];
};

struct _PLMav2BasebandHWStatsTX {
    unsigned int _field1[5][12];
};

struct _PLMav4BasebandHWOnOffComponentStats {
    unsigned int _field1[2];
};

struct _PLMav4BasebandHWSleepVeto {
    unsigned char _field1[4][13];
};

struct _PLMav4BasebandHWStatsARMPerf {
    unsigned int _field1[8];
};

struct _PLMav4BasebandHWStatsHeader {
    unsigned short _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
};

struct _PLMav4BasebandHWStatsMDSP {
    unsigned int _field1[5];
};

struct _PLMav4BasebandHWStatsQDSP {
    unsigned int _field1[5];
};

struct _PLMav4BasebandHWStatsRX {
    unsigned int _field1[5][4];
    unsigned int _field2[5][13];
    unsigned int _field3[5][13];
};

struct _PLMav4BasebandHWStatsSystem {
    unsigned int _field1[3];
};

struct _PLMav4BasebandHWStatsTX {
    unsigned int _field1[5][12];
};

struct _PLMav5BasebandHWAPPSSleepVeto {
    unsigned int _field1[1];
};

struct _PLMav5BasebandHWClocksDuration {
    unsigned int _field1[114];
    unsigned int _field2[95];
};

struct _PLMav5BasebandHWMPSSSleepVeto {
    unsigned int _field1[3];
};

struct _PLMav5BasebandHWStatsAPPSPerf {
    unsigned int _field1[6];
};

struct _PLMav5BasebandHWStatsMDSP {
    unsigned int _field1[10];
};

struct _PLMav5BasebandHWStatsProtocol {
    unsigned int _field1[5][16];
};

struct _PLMav5BasebandHWStatsQDSP {
    unsigned int _field1[10];
};

struct _PLMav5BasebandHWStatsRPM {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
};

struct _PLMav5BasebandHWStatsRX {
    unsigned int _field1[5][4];
    unsigned int _field2[5][13];
    unsigned int _field3[5][13];
};

struct _PLMav5BasebandHWStatsRXSQA {
    unsigned int _field1[5][11];
    unsigned int _field2[5][11];
};

struct _PLMav5BasebandHWStatsSleep {
    unsigned int _field1;
    unsigned int _field2;
};

struct _PLMav5BasebandHWStatsTX {
    unsigned int _field1[5][12];
};

struct _PLMav5BasebandHWStatsUSB {
    unsigned int _field1[3];
};

struct _PLMav7BasebandGPSDPOBin {
    unsigned int _field1[6];
};

struct _PLMav7BasebandHWStatsClockStateMask {
    unsigned int _field1[4];
};

struct _PLMav7BasebandHWStatsHSICState {
    unsigned int _field1[8];
};

struct _PLMav7BasebandHWStatsMCPMVeto {
    unsigned int _field1[6];
};

struct _PLMav7BasebandHWStatsNPAVeto {
    unsigned int _field1;
    unsigned int _field2[24];
};

struct _PLMav7BasebandHWStatsProtocol {
    unsigned int _field1[6][16];
    unsigned int _field2[6];
};

struct _PLMav7BasebandHWStatsRFTech {
    unsigned int _field1[6][4];
    unsigned int _field2[6][13];
    unsigned int _field3[6][13];
    unsigned int _field4[6][12];
    unsigned int _field5[6][11];
    unsigned int _field6[6][11];
};

struct _PLTimeIntervalRange {
    double _field1;
    double _field2;
};

struct in4in6_addr {
    unsigned int i46a_pad32[3];
    struct in_addr i46a_addr4;
};

struct in6_addr {
    union {
        unsigned char __u6_addr8[16];
        unsigned short __u6_addr16[8];
        unsigned int __u6_addr32[4];
    } __u6_addr;
};

struct in_addr {
    unsigned int s_addr;
};

struct in_sockinfo {
    int insi_fport;
    int insi_lport;
    unsigned long long insi_gencnt;
    unsigned int insi_flags;
    unsigned int insi_flow;
    unsigned char insi_vflag;
    unsigned char insi_ip_ttl;
    unsigned int rfu_1;
    CDUnion_95c9f286 insi_faddr;
    CDUnion_95c9f286 insi_laddr;
    struct {
        unsigned char in4_tos;
    } insi_v4;
    struct {
        unsigned char in6_hlim;
        int in6_cksum;
        unsigned short in6_ifindex;
        short in6_hops;
    } insi_v6;
};

struct kern_ctl_info {
    unsigned int kcsi_id;
    unsigned int kcsi_reg_unit;
    unsigned int kcsi_flags;
    unsigned int kcsi_recvbufsize;
    unsigned int kcsi_sendbufsize;
    unsigned int kcsi_unit;
    char kcsi_name[96];
};

struct kern_event_info {
    unsigned int kesi_vendor_code_filter;
    unsigned int kesi_class_filter;
    unsigned int kesi_subclass_filter;
};

struct ndrv_info {
    unsigned int ndrvsi_if_family;
    unsigned int ndrvsi_if_unit;
    char ndrvsi_if_name[16];
};

struct proc_bsdinfo {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    char _field13[16];
    char _field14[32];
    unsigned int _field15;
    unsigned int _field16;
    unsigned int _field17;
    unsigned int _field18;
    unsigned int _field19;
    int _field20;
    unsigned long long _field21;
    unsigned long long _field22;
};

struct proc_fdinfo {
    int _field1;
    unsigned int _field2;
};

struct proc_fileinfo {
    unsigned int fi_openflags;
    unsigned int fi_status;
    long long fi_offset;
    int fi_type;
    unsigned int fi_guardflags;
};

struct proc_taskallinfo {
    struct proc_bsdinfo _field1;
    struct proc_taskinfo _field2;
};

struct proc_taskinfo {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    int _field7;
    int _field8;
    int _field9;
    int _field10;
    int _field11;
    int _field12;
    int _field13;
    int _field14;
    int _field15;
    int _field16;
    int _field17;
    int _field18;
};

struct sockaddr_un {
    unsigned char sun_len;
    unsigned char sun_family;
    char sun_path[104];
};

struct sockbuf_info {
    unsigned int sbi_cc;
    unsigned int sbi_hiwat;
    unsigned int sbi_mbcnt;
    unsigned int sbi_mbmax;
    unsigned int sbi_lowat;
    short sbi_flags;
    short sbi_timeo;
};

struct socket_fdinfo {
    struct proc_fileinfo pfi;
    struct socket_info psi;
};

struct socket_info {
    struct vinfo_stat soi_stat;
    unsigned long long soi_so;
    unsigned long long soi_pcb;
    int soi_type;
    int soi_protocol;
    int soi_family;
    short soi_options;
    short soi_linger;
    short soi_state;
    short soi_qlen;
    short soi_incqlen;
    short soi_qlimit;
    short soi_timeo;
    unsigned short soi_error;
    unsigned int soi_oobmark;
    struct sockbuf_info soi_rcv;
    struct sockbuf_info soi_snd;
    int soi_kind;
    unsigned int rfu_1;
    union {
        struct in_sockinfo pri_in;
        struct tcp_sockinfo pri_tcp;
        struct un_sockinfo pri_un;
        struct ndrv_info pri_ndrv;
        struct kern_event_info pri_kern_event;
        struct kern_ctl_info pri_kern_ctl;
    } soi_proto;
};

struct tcp_sockinfo {
    struct in_sockinfo tcpsi_ini;
    int tcpsi_state;
    int tcpsi_timer[4];
    int tcpsi_mss;
    unsigned int tcpsi_flags;
    unsigned int rfu_1;
    unsigned long long tcpsi_tp;
};

struct un_sockinfo {
    unsigned long long unsi_conn_so;
    unsigned long long unsi_conn_pcb;
    CDUnion_e948d331 unsi_addr;
    CDUnion_e948d331 unsi_caddr;
};

struct vinfo_stat {
    unsigned int vst_dev;
    unsigned short vst_mode;
    unsigned short vst_nlink;
    unsigned long long vst_ino;
    unsigned int vst_uid;
    unsigned int vst_gid;
    long long vst_atime;
    long long vst_atimensec;
    long long vst_mtime;
    long long vst_mtimensec;
    long long vst_ctime;
    long long vst_ctimensec;
    long long vst_birthtime;
    long long vst_birthtimensec;
    long long vst_size;
    long long vst_blocks;
    int vst_blksize;
    unsigned int vst_flags;
    unsigned int vst_gen;
    unsigned int vst_rdev;
    long long vst_qspare[2];
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned char _field5[4];
    unsigned int _field6[2][16];
    unsigned int _field7[12];
    unsigned int _field8[1][4];
    unsigned int _field9[5];
    unsigned int _field10[6];
} CDStruct_b008ed62;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned long long _field3;
    unsigned long long _field4;
} CDStruct_7658c0cd;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3[2][3];
    unsigned int _field4[2][4];
    unsigned int _field5[2];
    unsigned int _field6[4];
    unsigned int _field7[4];
    unsigned int _field8[12];
} CDStruct_24d5adbc;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3[3];
} CDStruct_1addce7e;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3[7];
    unsigned int _field4[3];
} CDStruct_11910088;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
} CDStruct_c0454aff;

typedef struct {
    unsigned int _field1;
    unsigned long long _field2;
} CDStruct_d008d4b8;

typedef struct {
    unsigned short _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned char _field4;
    unsigned short _field5[4][6];
    unsigned int _field6[4][6];
} CDStruct_1bdbe9b9;

typedef struct {
    unsigned int _field1[12];
} CDStruct_713664b0;

typedef struct {
    unsigned int _field1[5];
} CDStruct_8c9fbaa1;

typedef struct {
    unsigned int _field1[9];
} CDStruct_4cf7c1f9;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    CDStruct_c0454aff _field3;
    CDStruct_c0454aff _field4;
    CDStruct_c0454aff _field5;
} CDStruct_ba477c7b;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    CDStruct_c0454aff _field3;
    struct {
        unsigned int _field1[6];
    } _field4;
} CDStruct_9b497bd6;

#pragma mark Typedef'd Unions

typedef union {
    struct sockaddr_un ua_sun;
    char ua_dummy[255];
} CDUnion_e948d331;

typedef union {
    struct in4in6_addr ina_46;
    struct in6_addr ina_6;
} CDUnion_95c9f286;

