/*******************************************************************************
 * video_sys.h: system dependant video output display method API
 * (c)1999 VideoLAN
 *******************************************************************************/

/*******************************************************************************
 * Prototypes
 *******************************************************************************/
int          vout_SysCreate     ( p_vout_thread_t p_vout
#ifdef VIDEO_X11
                                  , char *psz_display, Window root_window
#endif
                                );
int          vout_SysInit       ( p_vout_thread_t p_vout );
void         vout_SysEnd        ( p_vout_thread_t p_vout );
void         vout_SysDestroy    ( p_vout_thread_t p_vout );
int          vout_SysManage     ( p_vout_thread_t p_vout );
void         vout_SysDisplay    ( p_vout_thread_t p_vout );
byte_t *     vout_SysGetPicture ( p_vout_thread_t p_vout, int *pi_eol_offset );


