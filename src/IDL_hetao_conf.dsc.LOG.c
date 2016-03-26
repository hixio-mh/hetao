/* It had generated by DirectStruct v1.6.3 */
#include "IDL_hetao_conf.dsc.h"

#ifndef FUNCNAME_DSCLOG_hetao_conf
#define FUNCNAME_DSCLOG_hetao_conf	DSCLOG_hetao_conf
#endif

#ifndef PREFIX_DSCLOG_hetao_conf
#define PREFIX_DSCLOG_hetao_conf	printf( 
#endif

#ifndef NEWLINE_DSCLOG_hetao_conf
#define NEWLINE_DSCLOG_hetao_conf	"\n"
#endif

int FUNCNAME_DSCLOG_hetao_conf( hetao_conf *pst )
{
	int	index[10] = { 0 } ; index[0] = 0 ;
	PREFIX_DSCLOG_hetao_conf "hetao_conf.worker_processes[%d]" NEWLINE_DSCLOG_hetao_conf , pst->worker_processes );
	PREFIX_DSCLOG_hetao_conf "hetao_conf.cpu_affinity[%d]" NEWLINE_DSCLOG_hetao_conf , pst->cpu_affinity );
	PREFIX_DSCLOG_hetao_conf "hetao_conf.accept_mutex[%d]" NEWLINE_DSCLOG_hetao_conf , pst->accept_mutex );
	PREFIX_DSCLOG_hetao_conf "hetao_conf.error_log[%s]" NEWLINE_DSCLOG_hetao_conf , pst->error_log );
	PREFIX_DSCLOG_hetao_conf "hetao_conf.log_level[%s]" NEWLINE_DSCLOG_hetao_conf , pst->log_level );
		PREFIX_DSCLOG_hetao_conf "hetao_conf.limits.max_http_session_count[%d]" NEWLINE_DSCLOG_hetao_conf , pst->limits.max_http_session_count );
		PREFIX_DSCLOG_hetao_conf "hetao_conf.limits.max_file_cache[%d]" NEWLINE_DSCLOG_hetao_conf , pst->limits.max_file_cache );
		PREFIX_DSCLOG_hetao_conf "hetao_conf._listen_count[%d]" NEWLINE_DSCLOG_hetao_conf , pst->_listen_count );
		for( index[1] = 0 ; index[1] < pst->_listen_count ; index[1]++ )
		{
		PREFIX_DSCLOG_hetao_conf "hetao_conf.listen[index[1]].ip[%s]" NEWLINE_DSCLOG_hetao_conf , pst->listen[index[1]].ip );
		PREFIX_DSCLOG_hetao_conf "hetao_conf.listen[index[1]].port[%d]" NEWLINE_DSCLOG_hetao_conf , pst->listen[index[1]].port );
			PREFIX_DSCLOG_hetao_conf "hetao_conf.listen[index[1]].ssl.certificate_file[%s]" NEWLINE_DSCLOG_hetao_conf , pst->listen[index[1]].ssl.certificate_file );
			PREFIX_DSCLOG_hetao_conf "hetao_conf.listen[index[1]].ssl.certificate_key_file[%s]" NEWLINE_DSCLOG_hetao_conf , pst->listen[index[1]].ssl.certificate_key_file );
			PREFIX_DSCLOG_hetao_conf "hetao_conf.listen[index[1]]._website_count[%d]" NEWLINE_DSCLOG_hetao_conf , pst->listen[index[1]]._website_count );
			for( index[2] = 0 ; index[2] < pst->listen[index[1]]._website_count ; index[2]++ )
			{
			PREFIX_DSCLOG_hetao_conf "hetao_conf.listen[index[1]].website[index[2]].domain[%s]" NEWLINE_DSCLOG_hetao_conf , pst->listen[index[1]].website[index[2]].domain );
			PREFIX_DSCLOG_hetao_conf "hetao_conf.listen[index[1]].website[index[2]].wwwroot[%s]" NEWLINE_DSCLOG_hetao_conf , pst->listen[index[1]].website[index[2]].wwwroot );
			PREFIX_DSCLOG_hetao_conf "hetao_conf.listen[index[1]].website[index[2]].index[%s]" NEWLINE_DSCLOG_hetao_conf , pst->listen[index[1]].website[index[2]].index );
			PREFIX_DSCLOG_hetao_conf "hetao_conf.listen[index[1]].website[index[2]].access_log[%s]" NEWLINE_DSCLOG_hetao_conf , pst->listen[index[1]].website[index[2]].access_log );
				PREFIX_DSCLOG_hetao_conf "hetao_conf.listen[index[1]].website[index[2]]._rewrite_count[%d]" NEWLINE_DSCLOG_hetao_conf , pst->listen[index[1]].website[index[2]]._rewrite_count );
				for( index[3] = 0 ; index[3] < pst->listen[index[1]].website[index[2]]._rewrite_count ; index[3]++ )
				{
				PREFIX_DSCLOG_hetao_conf "hetao_conf.listen[index[1]].website[index[2]].rewrite[index[3]].pattern[%s]" NEWLINE_DSCLOG_hetao_conf , pst->listen[index[1]].website[index[2]].rewrite[index[3]].pattern );
				PREFIX_DSCLOG_hetao_conf "hetao_conf.listen[index[1]].website[index[2]].rewrite[index[3]].template[%s]" NEWLINE_DSCLOG_hetao_conf , pst->listen[index[1]].website[index[2]].rewrite[index[3]].template );
				}
				PREFIX_DSCLOG_hetao_conf "hetao_conf.listen[index[1]].website[index[2]].forward.forward_type[%s]" NEWLINE_DSCLOG_hetao_conf , pst->listen[index[1]].website[index[2]].forward.forward_type );
				PREFIX_DSCLOG_hetao_conf "hetao_conf.listen[index[1]].website[index[2]].forward.forward_rule[%s]" NEWLINE_DSCLOG_hetao_conf , pst->listen[index[1]].website[index[2]].forward.forward_rule );
					PREFIX_DSCLOG_hetao_conf "hetao_conf.listen[index[1]].website[index[2]].forward._forward_server_count[%d]" NEWLINE_DSCLOG_hetao_conf , pst->listen[index[1]].website[index[2]].forward._forward_server_count );
					for( index[4] = 0 ; index[4] < pst->listen[index[1]].website[index[2]].forward._forward_server_count ; index[4]++ )
					{
					PREFIX_DSCLOG_hetao_conf "hetao_conf.listen[index[1]].website[index[2]].forward.forward_server[index[4]].ip[%s]" NEWLINE_DSCLOG_hetao_conf , pst->listen[index[1]].website[index[2]].forward.forward_server[index[4]].ip );
					PREFIX_DSCLOG_hetao_conf "hetao_conf.listen[index[1]].website[index[2]].forward.forward_server[index[4]].port[%d]" NEWLINE_DSCLOG_hetao_conf , pst->listen[index[1]].website[index[2]].forward.forward_server[index[4]].port );
					}
			}
		}
		PREFIX_DSCLOG_hetao_conf "hetao_conf.tcp_options.nodelay[%d]" NEWLINE_DSCLOG_hetao_conf , pst->tcp_options.nodelay );
		PREFIX_DSCLOG_hetao_conf "hetao_conf.tcp_options.nolinger[%d]" NEWLINE_DSCLOG_hetao_conf , pst->tcp_options.nolinger );
		PREFIX_DSCLOG_hetao_conf "hetao_conf.http_options.compress_on[%d]" NEWLINE_DSCLOG_hetao_conf , pst->http_options.compress_on );
		PREFIX_DSCLOG_hetao_conf "hetao_conf.http_options.timeout[%d]" NEWLINE_DSCLOG_hetao_conf , pst->http_options.timeout );
		PREFIX_DSCLOG_hetao_conf "hetao_conf.http_options.forward_disable[%d]" NEWLINE_DSCLOG_hetao_conf , pst->http_options.forward_disable );
		PREFIX_DSCLOG_hetao_conf "hetao_conf.error_pages.error_page_400[%s]" NEWLINE_DSCLOG_hetao_conf , pst->error_pages.error_page_400 );
		PREFIX_DSCLOG_hetao_conf "hetao_conf.error_pages.error_page_401[%s]" NEWLINE_DSCLOG_hetao_conf , pst->error_pages.error_page_401 );
		PREFIX_DSCLOG_hetao_conf "hetao_conf.error_pages.error_page_403[%s]" NEWLINE_DSCLOG_hetao_conf , pst->error_pages.error_page_403 );
		PREFIX_DSCLOG_hetao_conf "hetao_conf.error_pages.error_page_404[%s]" NEWLINE_DSCLOG_hetao_conf , pst->error_pages.error_page_404 );
		PREFIX_DSCLOG_hetao_conf "hetao_conf.error_pages.error_page_408[%s]" NEWLINE_DSCLOG_hetao_conf , pst->error_pages.error_page_408 );
		PREFIX_DSCLOG_hetao_conf "hetao_conf.error_pages.error_page_500[%s]" NEWLINE_DSCLOG_hetao_conf , pst->error_pages.error_page_500 );
		PREFIX_DSCLOG_hetao_conf "hetao_conf.error_pages.error_page_503[%s]" NEWLINE_DSCLOG_hetao_conf , pst->error_pages.error_page_503 );
		PREFIX_DSCLOG_hetao_conf "hetao_conf.error_pages.error_page_505[%s]" NEWLINE_DSCLOG_hetao_conf , pst->error_pages.error_page_505 );
			PREFIX_DSCLOG_hetao_conf "hetao_conf.mime_types._mime_type_count[%d]" NEWLINE_DSCLOG_hetao_conf , pst->mime_types._mime_type_count );
			for( index[2] = 0 ; index[2] < pst->mime_types._mime_type_count ; index[2]++ )
			{
			PREFIX_DSCLOG_hetao_conf "hetao_conf.mime_types.mime_type[index[2]].type[%s]" NEWLINE_DSCLOG_hetao_conf , pst->mime_types.mime_type[index[2]].type );
			PREFIX_DSCLOG_hetao_conf "hetao_conf.mime_types.mime_type[index[2]].mime[%s]" NEWLINE_DSCLOG_hetao_conf , pst->mime_types.mime_type[index[2]].mime );
			PREFIX_DSCLOG_hetao_conf "hetao_conf.mime_types.mime_type[index[2]].compress_enable[%c]" NEWLINE_DSCLOG_hetao_conf , pst->mime_types.mime_type[index[2]].compress_enable );
			}
	return 0;
}
