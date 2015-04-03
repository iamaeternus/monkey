set(src
  monkey.c
  mk_mimetype.c
  mk_vhost.c
  mk_header.c
  mk_config.c
  mk_signals.c
  mk_user.c
  mk_utils.c
  mk_stream.c
  mk_scheduler.c
  mk_string.c
  mk_memory.c
  mk_connection.c
  mk_iov.c
  mk_http.c
  mk_http_parser.c
  mk_file.c
  mk_socket.c
  mk_clock.c
  mk_cache.c
  mk_event.c
  mk_server.c
  mk_kernel.c
  mk_rbtree.c
  mk_plugin.c
  )

add_executable(monkey ${src})
target_link_libraries(monkey dl ${CMAKE_THREAD_LIBS_INIT})