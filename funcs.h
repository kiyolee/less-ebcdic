public char * saven(constant char *s, size_t n);
public char * save(constant char *s);
public void out_of_memory(void);
public void * ecalloc(size_t count, size_t size);
public char * skipsp(char *s);
public constant char * skipspc(constant char *s);
public size_t sprefix(constant char *ps, constant char *s, int uppercase);
public void quit(int status);
public int secure_allow(int features);
public void raw_mode(int on);
public constant char * special_key_str(int key);
public void init_win_colors(void);
public void get_term(void);
public void init_mouse(void);
public void deinit_mouse(void);
public void init(void);
public void deinit(void);
public int interactive(void);
public void home(void);
public void dump_screen(void);
public void add_line(void);
public void remove_top(int n);
public void win32_scroll_up(int n);
public void lower_left(void);
public void line_left(void);
public void check_winch(void);
public void goto_line(int sindex);
public void vbell(void);
public void bell(void);
public void clear(void);
public void clear_eol(void);
public void clear_bot(void);
public COLOR_TYPE parse_color(constant char *str, mutable int *p_fg, mutable int *p_bg, mutable CHAR_ATTR *p_cattr);
public void at_enter(int attr);
public void at_exit(void);
public void at_switch(int attr);
public lbool is_at_equiv(int attr1, int attr2);
public int apply_at_specials(int attr);
public void putbs(void);
public void WIN32ungetch(int ch);
public lbool win32_kbhit(void);
public char WIN32getch(void);
public void win32_getch_clear(void);
public void WIN32setcolors(int fg, int bg);
public void WIN32textout(constant char *text, size_t len);
public void match_brac(char obrac, char cbrac, int forwdir, int n);
public void ch_ungetchar(int c);
public void end_logfile(void);
public void sync_logfile(void);
public int ch_seek(POSITION pos);
public int ch_end_seek(void);
public int ch_end_buffer_seek(void);
public int ch_beg_seek(void);
public POSITION ch_length(void);
public POSITION ch_tell(void);
public int ch_forw_get(void);
public int ch_back_get(void);
public void ch_setbufspace(ssize_t bufspace);
public void ch_flush(void);
public int seekable(int f);
public void ch_set_eof(void);
public void ch_init(int f, int flags, ssize_t nread);
public void ch_close(void);
public int ch_getflags(void);
public void ebcdic_to_ascii(char* buf, ssize_t sz);
public void setfmt(constant char *s, constant char **fmtvarptr, int *attrptr, constant char *default_fmt, lbool for_printf);
public void init_charset(void);
public lbool binary_char(LWCHAR c);
public lbool control_char(LWCHAR c);
public constant char * prchar(LWCHAR c);
public constant char * prutfchar(LWCHAR ch);
public int utf_len(char ch);
public lbool is_utf8_well_formed(constant char *ss, int slen);
public void utf_skip_to_lead(constant char **pp, constant char *limit);
public LWCHAR get_wchar(constant char *sp);
public void put_wchar(mutable char **pp, LWCHAR ch);
public LWCHAR step_charc(constant char **pp, signed int dir, constant char *limit);
public LWCHAR step_char(char **pp, signed int dir, constant char *limit);
public lbool is_composing_char(LWCHAR ch);
public lbool is_ubin_char(LWCHAR ch);
public lbool is_wide_char(LWCHAR ch);
public lbool is_combining_char(LWCHAR ch1, LWCHAR ch2);
public void cmd_reset(void);
public void clear_cmd(void);
public void cmd_putstr(constant char *s);
public int len_cmdbuf(void);
public void cmd_repaint(constant char *old_cp);
public void set_mlist(void *mlist, int cmdflags);
public ssize_t save_updown_match(void);
public void restore_updown_match(ssize_t udm);
public void cmd_addhist(struct mlist *mlist, constant char *cmd, lbool modified);
public void cmd_accept(void);
public int cmd_char(char c);
public LINENUM cmd_int(mutable long *frac);
public constant char * get_cmdbuf(void);
public constant char * cmd_lastpattern(void);
public void init_cmdhist(void);
public void save_cmdhist(void);
public int in_mca(void);
public int norm_search_type(int st);
public void screen_trashed_num(int trashed);
public void screen_trashed(void);
public int is_screen_trashed(void);
public void dispversion(void);
public void getcc_clear(void);
public char getcc(void);
public void ungetcc(char c);
public void ungetcc_back(char c);
public void ungetcc_end_command(void);
public void ungetsc(constant char *s);
public char peekcc(void);
public void commands(void);
public size_t cvt_length(size_t len, int ops);
public int * cvt_alloc_chpos(size_t len);
public void cvt_text(mutable char *odst, constant char *osrc, mutable int *chpos, mutable size_t *lenp, int ops);
public void expand_cmd_tables(void);
public void init_cmds(void);
public void add_fcmd_table(unsigned char *buf, size_t len);
public void add_ecmd_table(unsigned char *buf, size_t len);
public void add_uvar_table(unsigned char *buf, size_t len);
public void add_sysvar_table(unsigned char *buf, size_t len);
public int fcmd_decode(constant char *cmd, constant char **sp);
public int ecmd_decode(constant char *cmd, constant char **sp);
public constant char * lgetenv(constant char *var);
public constant char * lgetenv_ext(constant char *var, unsigned char *env_buf, size_t env_buf_len);
public lbool isnullenv(constant char *s);
public int lesskey(constant char *filename, lbool sysvar);
public int lesskey_src(constant char *filename, lbool sysvar);
public int lesskey_content(constant char *content, lbool sysvar);
public int editchar(char c, int flags);
public void init_textlist(struct textlist *tlist, mutable char *str);
public constant char * forw_textlist(struct textlist *tlist, constant char *prev);
public constant char * back_textlist(struct textlist *tlist, constant char *prev);
public void close_altpipe(IFILE ifile);
public void check_altpipe_error(void);
public int edit(constant char *filename);
public int edit_ifile(IFILE ifile);
public int edit_list(char *filelist);
public int edit_first(void);
public int edit_last(void);
public int edit_next(int n);
public int edit_prev(int n);
public int edit_index(int n);
public IFILE save_curr_ifile(void);
public void unsave_ifile(IFILE save_ifile);
public void reedit_ifile(IFILE save_ifile);
public void reopen_curr_ifile(void);
public int edit_stdin(void);
public void cat_file(void);
public void use_logfile(constant char *filename);
public void expand_evars(mutable char *buf, size_t len, struct xbuffer *xbuf);
public char * shell_unquote(constant char *str);
public constant char * get_meta_escape(void);
public char * shell_quoten(constant char *s, size_t slen);
public char * shell_quote(constant char *s);
public char * dirfile(constant char *dirname, constant char *filename, int must_exist);
public char * homefile(constant char *filename);
public char * fexpand(constant char *s);
public char * fcomplete(constant char *s);
public int bin_file(int f, ssize_t *n);
public char * readfd(FILE *fd);
public char * lglob(constant char *afilename);
public lbool is_fake_pathname(constant char *path);
public char * lrealpath(constant char *path);
public char * open_altfile(constant char *filename, int *pf, void **pfd);
public void close_altfile(constant char *altfilename, constant char *filename);
public lbool is_dir(constant char *filename);
public char * bad_file(constant char *filename);
public POSITION filesize(int f);
public lbool curr_ifile_changed(void);
public constant char * shell_coption(void);
public constant char * last_component(constant char *name);
public void eof_bell(void);
public lbool eof_displayed(void);
public lbool entire_file_displayed(void);
public void squish_check(void);
public int overlay_header(void);
public void forw(int n, POSITION pos, lbool force, lbool only_last, int nblank);
public void back(int n, POSITION pos, lbool force, lbool only_last);
public void forward(int n, lbool force, lbool only_last);
public void backward(int n, lbool force, lbool only_last);
public int get_back_scroll(void);
public int get_one_screen(void);
public void del_ifile(IFILE h);
public IFILE next_ifile(IFILE h);
public IFILE prev_ifile(IFILE h);
public IFILE getoff_ifile(IFILE ifile);
public int nifile(void);
public IFILE get_ifile(constant char *filename, IFILE prev);
public constant char * get_filename(IFILE ifile);
public constant char * get_real_filename(IFILE ifile);
public int get_index(IFILE ifile);
public void store_pos(IFILE ifile, struct scrpos *scrpos);
public void get_pos(IFILE ifile, struct scrpos *scrpos);
public void set_open(IFILE ifile);
public int opened(IFILE ifile);
public void hold_ifile(IFILE ifile, int incr);
public int held_ifile(IFILE ifile);
public void * get_filestate(IFILE ifile);
public void set_filestate(IFILE ifile, void *filestate);
public void set_altpipe(IFILE ifile, void *p);
public void *get_altpipe(IFILE ifile);
public void set_altfilename(IFILE ifile, char *altfilename);
public char * get_altfilename(IFILE ifile);
public void if_dump(void);
public POSITION forw_line_seg(POSITION curr_pos, lbool skipeol, lbool rscroll, lbool nochop);
public POSITION forw_line(POSITION curr_pos);
public POSITION back_line(POSITION curr_pos);
public void set_attnpos(POSITION pos);
public void jump_forw(void);
public void jump_forw_buffered(void);
public void jump_back(LINENUM linenum);
public void repaint(void);
public void jump_percent(int percent, long fraction);
public void jump_line_loc(POSITION pos, int sline);
public POSITION after_header_pos(POSITION pos);
public void jump_loc(POSITION pos, int sline);
public void init_line(void);
public lbool is_ascii_char(LWCHAR ch);
public POSITION line_position(void);
public void prewind(void);
public void plinestart(POSITION pos);
public int line_pfx_width(void);
public void pshift_all(void);
public int pwidth(LWCHAR ch, int a, LWCHAR prev_ch, int prev_a);
public void savec(void);
public void loadc(void);
public lbool is_ansi_end(LWCHAR ch);
public lbool is_ansi_middle(LWCHAR ch);
public void skip_ansi(struct ansi_state *pansi, constant char **pp, constant char *limit);
public struct ansi_state * ansi_start(LWCHAR ch);
public ansi_state ansi_step(struct ansi_state *pansi, LWCHAR ch);
public osc8_state ansi_osc8_state(struct ansi_state *pansi);
public void ansi_done(struct ansi_state *pansi);
public int pappend_b(char c, POSITION pos, lbool before_pendc);
public int pappend(char c, POSITION pos);
public int pflushmbc(void);
public void pdone(int endline, int chopped, int forw);
public int col_from_pos(POSITION linepos, POSITION spos, POSITION saved_pos, int saved_col);
public POSITION pos_from_col(POSITION linepos, int col, POSITION saved_pos, int saved_col);
public void set_attr_line(int a);
public void set_status_col(char c, int attr);
public int gline(size_t i, int *ap);
public void null_line(void);
public POSITION forw_raw_line_len(POSITION curr_pos, size_t read_len, constant char **linep, size_t *line_lenp);
public POSITION forw_raw_line(POSITION curr_pos, constant char **linep, size_t *line_lenp);
public POSITION back_raw_line(POSITION curr_pos, constant char **linep, size_t *line_lenp);
public int skip_columns(int cols, constant char **linep, size_t *line_lenp);
public void load_line(constant char *str);
public int rrshift(void);
public int set_color_map(int attr, constant char *colorstr);
public constant char * get_color_map(int attr);
public void clr_linenum(void);
public void add_lnum(LINENUM linenum, POSITION pos);
public LINENUM find_linenum(POSITION pos);
public POSITION find_pos(LINENUM linenum);
public LINENUM currline(int where);
public void scan_eof(void);
public LINENUM vlinenum(LINENUM linenum);
public void lsystem(constant char *cmd, constant char *donemsg);
public int pipe_mark(char c, constant char *cmd);
public int pipe_data(constant char *cmd, POSITION spos, POSITION epos);
public void init_mark(void);
public int badmark(char c);
public void setmark(char c, int where);
public void clrmark(char c);
public void lastmark(void);
public void gomark(char c);
public POSITION markpos(char c);
public char posmark(POSITION pos);
public void unmark(IFILE ifile);
public void mark_check_ifile(IFILE ifile);
public void save_marks(FILE *fout, constant char *hdr);
public void restore_mark(constant char *line);
public void opt_o(int type, constant char *s);
public void opt__O(int type, constant char *s);
public void opt_j(int type, constant char *s);
public void calc_jump_sline(void);
public void opt_shift(int type, constant char *s);
public void calc_shift_count(void);
public void opt_k(int type, constant char *s);
public void opt_ks(int type, constant char *s);
public void opt_kc(int type, constant char *s);
public void opt__S(int type, constant char *s);
public void opt_t(int type, constant char *s);
public void opt__T(int type, constant char *s);
public void opt_p(int type, constant char *s);
public void opt__P(int type, constant char *s);
public void opt_b(int type, constant char *s);
public void opt_i(int type, constant char *s);
public void opt__V(int type, constant char *s);
public void opt_D(int type, constant char *s);
public void set_tabs(constant char *s, size_t len);
public void opt_x(int type, constant char *s);
public void opt_quote(int type, constant char *s);
public void opt_rscroll(int type, constant char *s);
public void opt_query(int type, constant char *s);
public void opt_match_shift(int type, constant char *s);
public void calc_match_shift(void);
public void opt_mousecap(int type, constant char *s);
public void opt_wheel_lines(int type, constant char *s);
public void opt_linenum_width(int type, constant char *s);
public void opt_status_col_width(int type, constant char *s);
public void opt_filesize(int type, constant char *s);
public void opt_intr(int type, constant char *s);
public int next_cnum(constant char **sp, constant char *printopt, constant char *errmsg, lbool *errp);
public void opt_header(int type, constant char *s);
public void opt_search_type(int type, constant char *s);
public void opt_nosearch_headers(int type, constant char *s);
public void opt_nosearch_header_lines(int type, constant char *s);
public void opt_nosearch_header_cols(int type, constant char *s);
public void opt_ttyin_name(int type, constant char *s);
public int chop_line(void);
public int get_swindow(void);
public constant char * propt(char c);
public void scan_option(constant char *s);
public void toggle_option(struct loption *o, int lower, constant char *s, int how_toggle);
public int opt_has_param(struct loption *o);
public constant char * opt_prompt(struct loption *o);
public constant char * opt_toggle_disallowed(int c);
public lbool isoptpending(void);
public void nopendopt(void);
public int getnumc(constant char **sp, constant char *printopt, lbool *errp);
public int getnum(char **sp, constant char *printopt, lbool *errp);
public long getfraction(constant char **sp, constant char *printopt, lbool *errp);
public void init_unsupport(void);
public int get_quit_at_eof(void);
public void init_option(void);
public struct loption * findopt(int c);
public struct loption * findopt_name(constant char **p_optname, constant char **p_oname, lbool *p_ambig);
public void init_poll(void);
public int supports_ctrl_x(void);
public ssize_t iread(int fd, unsigned char *buf, size_t len);
public void intread(void);
public time_type get_time(void);
public char * errno_message(constant char *filename);
public constant char * signal_message(int sig);
public uintmax umuldiv(uintmax val, uintmax num, uintmax den);
public int percentage(POSITION num, POSITION den);
public POSITION percent_pos(POSITION pos, int percent, long fraction);
public int os9_signal(int type, RETSIGTYPE (*handler)());
public void sleep_ms(int ms);
public void put_line(void);
public void flush(void);
public void set_output(int fd);
public int putchr(int ch);
public void clear_bot_if_needed(void);
public void putstr(constant char *s);
public int less_printf(constant char *fmt, PARG *parg);
public void get_return(void);
public void error(constant char *fmt, PARG *parg);
public void ierror(constant char *fmt, PARG *parg);
public void ixerror(constant char *fmt, PARG *parg);
public int query(constant char *fmt, PARG *parg);
public int compile_pattern(constant char *pattern, int search_type, int show_error, PATTERN_TYPE *comp_pattern);
public void uncompile_pattern(PATTERN_TYPE *pattern);
public int valid_pattern(char *pattern);
public lbool is_null_pattern(PATTERN_TYPE pattern);
public int match_pattern(PATTERN_TYPE pattern, constant char *tpattern, constant char *line, size_t line_len, constant char **sp, constant char **ep, int nsp, int notbol, int search_type);
public constant char * pattern_lib_name(void);
public POSITION position(int sindex);
public void add_forw_pos(POSITION pos);
public void add_back_pos(POSITION pos);
public void pos_clear(void);
public void pos_init(void);
public int onscreen(POSITION pos);
public int empty_screen(void);
public int empty_lines(int s, int e);
public void get_scrpos(struct scrpos *scrpos, int where);
public int sindex_from_sline(int sline);
public void pos_rehead(void);
public void init_prompt(void);
public constant char * pr_expand(constant char *proto);
public constant char * eq_message(void);
public constant char * pr_string(void);
public constant char * wait_message(void);
public void init_search(void);
public int get_cvt_ops(int search_type);
public void repaint_hilite(lbool on);
public void clear_attn(void);
public void undo_search(lbool clear);
public void clr_hlist(struct hilite_tree *anchor);
public void clr_hilite(void);
public void clr_filter(void);
public void set_header(POSITION pos);
public lbool is_filtered(POSITION pos);
public POSITION next_unfiltered(POSITION pos);
public POSITION prev_unfiltered(POSITION pos);
public int is_hilited_attr(POSITION pos, POSITION epos, int nohide, int *p_matches);
public void chg_hilite(void);
public void osc8_search(int search_type, constant char *param, int matches);
public lbool osc8_click(int sindex, int col);
public void osc8_open(void);
public void osc8_jump(void);
public void chg_caseless(void);
public int search(int search_type, constant char *pattern, int n);
public void prep_hilite(POSITION spos, POSITION epos, int maxlines);
public void set_filter_pattern(constant char *pattern, int search_type);
public lbool is_filtering(void);
public RETSIGTYPE winch(int type);
public void init_signals(int on);
public void psignals(void);
public void cleantags(void);
public int gettagtype(void);
public void findtag(constant char *tag);
public POSITION tagsearch(void);
public constant char * nexttag(int n);
public constant char * prevtag(int n);
public int ntags(void);
public int curr_tag(void);
public int edit_tagfile(void);
public lbool is_lesstest(void);
public int open_tty(void);
public void open_getchr(void);
public void close_getchr(void);
public int pclose(FILE *f);
public int default_wheel_lines(void);
public int getchr(void);
public void xbuf_init(struct xbuffer *xbuf);
public void xbuf_init_size(struct xbuffer *xbuf, size_t init_size);
public void xbuf_deinit(struct xbuffer *xbuf);
public void xbuf_reset(struct xbuffer *xbuf);
public void xbuf_add_byte(struct xbuffer *xbuf, unsigned char b);
public void xbuf_add_char(struct xbuffer *xbuf, char c);
public void xbuf_add_data(struct xbuffer *xbuf, constant unsigned char *data, size_t len);
public int xbuf_pop(struct xbuffer *buf);
public void xbuf_set(struct xbuffer *dst, struct xbuffer *src);
public constant char * xbuf_char_data(constant struct xbuffer *xbuf);
public lbool help_ckd_add(void *r, uintmax a, uintmax b, int rsize, int rsigned);
public lbool help_ckd_mul(void *r, uintmax a, uintmax b, int rsize, int rsigned);
