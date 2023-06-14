#############################################################################
# Makefile for building: q_basedonQt
# Generated by qmake (3.1) (Qt 6.5.1)
# Project:  q_basedonQt.pro
# Template: app
# Command: C:/Qt/6.5.1/mingw_64/bin/qmake.exe -o Makefile q_basedonQt.pro -spec win32-g++ CONFIG+=debug CONFIG+=qml_debug
#############################################################################

MAKEFILE      = Makefile

EQ            = =

first: debug
install: debug-install
uninstall: debug-uninstall
QMAKE         = C:/Qt/6.5.1/mingw_64/bin/qmake.exe
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
INSTALL_FILE  = cp -f
INSTALL_PROGRAM = cp -f
INSTALL_DIR   = cp -f -R
QINSTALL      = C:/Qt/6.5.1/mingw_64/bin/qmake.exe -install qinstall
QINSTALL_PROGRAM = C:/Qt/6.5.1/mingw_64/bin/qmake.exe -install qinstall -exe
DEL_FILE      = rm -f
SYMLINK       = $(QMAKE) -install ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
IDC           = idc
IDL           = midl
ZIP           = 
DEF_FILE      = 
RES_FILE      = 
SED           = sed
MOVE          = mv -f
SUBTARGETS    =  \
		debug \
		release


debug: FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall
release: FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall

Makefile: q_basedonQt.pro C:/Qt/6.5.1/mingw_64/mkspecs/win32-g++/qmake.conf C:/Qt/6.5.1/mingw_64/mkspecs/features/spec_pre.prf \
		C:/Qt/6.5.1/mingw_64/mkspecs/features/device_config.prf \
		C:/Qt/6.5.1/mingw_64/mkspecs/common/sanitize.conf \
		C:/Qt/6.5.1/mingw_64/mkspecs/common/gcc-base.conf \
		C:/Qt/6.5.1/mingw_64/mkspecs/common/g++-base.conf \
		C:/Qt/6.5.1/mingw_64/mkspecs/features/win32/windows_vulkan_sdk.prf \
		C:/Qt/6.5.1/mingw_64/mkspecs/common/windows-vulkan.conf \
		C:/Qt/6.5.1/mingw_64/mkspecs/common/g++-win32.conf \
		C:/Qt/6.5.1/mingw_64/mkspecs/common/windows-desktop.conf \
		C:/Qt/6.5.1/mingw_64/mkspecs/qconfig.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_ext_freetype.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_ext_libjpeg.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_ext_libpng.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3danimation.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3danimation_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dcore.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dcore_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dextras.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dextras_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dinput.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dinput_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dlogic.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dlogic_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dquick.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dquick_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dquickanimation.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dquickanimation_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dquickextras.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dquickextras_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dquickinput.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dquickinput_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dquickrender.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dquickrender_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dquickscene2d.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dquickscene2d_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3drender.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3drender_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_charts.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_charts_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_chartsqml.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_chartsqml_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_concurrent.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_concurrent_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_core.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_core_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_dbus.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_dbus_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_designer.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_designer_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_designercomponents_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_devicediscovery_support_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_entrypoint_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_example_icons_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_fb_support_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_freetype_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_grpc.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_grpc_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_gui.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_gui_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_harfbuzz_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_help.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_help_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_httpserver.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_httpserver_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_jpeg_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_jsonrpc_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_labsanimation.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_labsanimation_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_labsfolderlistmodel.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_labsfolderlistmodel_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_labsqmlmodels.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_labsqmlmodels_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_labssettings.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_labssettings_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_labssharedimage.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_labssharedimage_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_labswavefrontmesh.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_labswavefrontmesh_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_languageserver_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_linguist.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_linguist_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_multimedia.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_multimedia_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_multimediaquick_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_multimediawidgets.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_network.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_network_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_networkauth.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_networkauth_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_opengl.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_opengl_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_openglwidgets.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_openglwidgets_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_packetprotocol_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_png_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_positioning.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_positioning_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_positioningquick.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_positioningquick_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_printsupport.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_printsupport_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_protobuf.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_protobuf_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qml.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qml_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmlcompiler_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmlcore.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmlcore_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmldebug_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmldom_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmlintegration.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmlintegration_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmllocalstorage.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmllocalstorage_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmlmodels.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmlmodels_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmltest.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmltest_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmltyperegistrar_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmlworkerscript.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmlworkerscript_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmlxmllistmodel.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmlxmllistmodel_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quick.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quick3dspatialaudio_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quick_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quickcontrols2.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quickcontrols2_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quickcontrols2impl.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quickcontrols2impl_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quickcontrolstestutilsprivate_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2quickimpl.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2quickimpl_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2utils.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2utils_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quickeffects_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quicklayouts.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quicklayouts_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quickparticles_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quickshapes_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quicktemplates2.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quicktemplates2_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quicktestutilsprivate_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quickwidgets.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_shadertools.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_shadertools_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_spatialaudio.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_spatialaudio_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_sql.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_sql_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_svg.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_svg_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_svgwidgets.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_svgwidgets_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_testlib.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_testlib_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_tools_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_uiplugin.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_uitools.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_uitools_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_webchannel.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_webchannel_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_websockets.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_websockets_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_widgets.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_widgets_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_xml.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_xml_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_zlib_private.pri \
		C:/Qt/6.5.1/mingw_64/mkspecs/features/qt_functions.prf \
		C:/Qt/6.5.1/mingw_64/mkspecs/features/qt_config.prf \
		C:/Qt/6.5.1/mingw_64/mkspecs/win32-g++/qmake.conf \
		C:/Qt/6.5.1/mingw_64/mkspecs/features/spec_post.prf \
		.qmake.stash \
		C:/Qt/6.5.1/mingw_64/mkspecs/features/exclusive_builds.prf \
		C:/Qt/6.5.1/mingw_64/mkspecs/features/toolchain.prf \
		C:/Qt/6.5.1/mingw_64/mkspecs/features/default_pre.prf \
		C:/Qt/6.5.1/mingw_64/mkspecs/features/win32/default_pre.prf \
		C:/Qt/6.5.1/mingw_64/mkspecs/features/resolve_config.prf \
		C:/Qt/6.5.1/mingw_64/mkspecs/features/exclusive_builds_post.prf \
		C:/Qt/6.5.1/mingw_64/mkspecs/features/default_post.prf \
		C:/Qt/6.5.1/mingw_64/mkspecs/features/lrelease.prf \
		C:/Qt/6.5.1/mingw_64/mkspecs/features/qml_debug.prf \
		C:/Qt/6.5.1/mingw_64/mkspecs/features/entrypoint.prf \
		C:/Qt/6.5.1/mingw_64/mkspecs/features/precompile_header.prf \
		C:/Qt/6.5.1/mingw_64/mkspecs/features/warn_on.prf \
		C:/Qt/6.5.1/mingw_64/mkspecs/features/qt.prf \
		C:/Qt/6.5.1/mingw_64/mkspecs/features/resources_functions.prf \
		C:/Qt/6.5.1/mingw_64/mkspecs/features/resources.prf \
		C:/Qt/6.5.1/mingw_64/mkspecs/features/moc.prf \
		C:/Qt/6.5.1/mingw_64/mkspecs/features/win32/opengl.prf \
		C:/Qt/6.5.1/mingw_64/mkspecs/features/uic.prf \
		C:/Qt/6.5.1/mingw_64/mkspecs/features/qmake_use.prf \
		C:/Qt/6.5.1/mingw_64/mkspecs/features/file_copies.prf \
		C:/Qt/6.5.1/mingw_64/mkspecs/features/win32/windows.prf \
		C:/Qt/6.5.1/mingw_64/mkspecs/features/testcase_targets.prf \
		C:/Qt/6.5.1/mingw_64/mkspecs/features/exceptions.prf \
		C:/Qt/6.5.1/mingw_64/mkspecs/features/yacc.prf \
		C:/Qt/6.5.1/mingw_64/mkspecs/features/lex.prf \
		q_basedonQt.pro \
		C:/Qt/6.5.1/mingw_64/lib/Qt6Widgets.prl \
		C:/Qt/6.5.1/mingw_64/lib/Qt6Gui.prl \
		C:/Qt/6.5.1/mingw_64/lib/Qt6WebSockets.prl \
		C:/Qt/6.5.1/mingw_64/lib/Qt6Network.prl \
		C:/Qt/6.5.1/mingw_64/lib/Qt6Core.prl \
		C:/Qt/6.5.1/mingw_64/lib/Qt6EntryPoint.prl \
		C:/Qt/6.5.1/mingw_64/mkspecs/features/build_pass.prf \
		src.qrc \
		debug/qmake_qmake_qm_files.qrc \
		release/qmake_qmake_qm_files.qrc
	$(QMAKE) -o Makefile q_basedonQt.pro -spec win32-g++ CONFIG+=debug CONFIG+=qml_debug
C:/Qt/6.5.1/mingw_64/mkspecs/features/spec_pre.prf:
C:/Qt/6.5.1/mingw_64/mkspecs/features/device_config.prf:
C:/Qt/6.5.1/mingw_64/mkspecs/common/sanitize.conf:
C:/Qt/6.5.1/mingw_64/mkspecs/common/gcc-base.conf:
C:/Qt/6.5.1/mingw_64/mkspecs/common/g++-base.conf:
C:/Qt/6.5.1/mingw_64/mkspecs/features/win32/windows_vulkan_sdk.prf:
C:/Qt/6.5.1/mingw_64/mkspecs/common/windows-vulkan.conf:
C:/Qt/6.5.1/mingw_64/mkspecs/common/g++-win32.conf:
C:/Qt/6.5.1/mingw_64/mkspecs/common/windows-desktop.conf:
C:/Qt/6.5.1/mingw_64/mkspecs/qconfig.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_ext_freetype.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_ext_libjpeg.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_ext_libpng.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3danimation.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3danimation_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dcore.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dcore_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dextras.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dextras_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dinput.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dinput_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dlogic.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dlogic_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dquick.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dquick_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dquickanimation.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dquickanimation_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dquickextras.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dquickextras_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dquickinput.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dquickinput_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dquickrender.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dquickrender_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dquickscene2d.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3dquickscene2d_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3drender.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_3drender_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_charts.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_charts_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_chartsqml.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_chartsqml_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_concurrent.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_concurrent_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_core.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_core_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_dbus.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_dbus_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_designer.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_designer_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_designercomponents_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_devicediscovery_support_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_entrypoint_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_example_icons_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_fb_support_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_freetype_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_grpc.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_grpc_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_gui.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_gui_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_harfbuzz_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_help.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_help_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_httpserver.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_httpserver_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_jpeg_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_jsonrpc_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_labsanimation.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_labsanimation_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_labsfolderlistmodel.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_labsfolderlistmodel_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_labsqmlmodels.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_labsqmlmodels_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_labssettings.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_labssettings_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_labssharedimage.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_labssharedimage_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_labswavefrontmesh.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_labswavefrontmesh_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_languageserver_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_linguist.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_linguist_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_multimedia.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_multimedia_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_multimediaquick_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_multimediawidgets.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_multimediawidgets_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_network.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_network_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_networkauth.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_networkauth_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_opengl.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_opengl_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_openglwidgets.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_openglwidgets_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_packetprotocol_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_png_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_positioning.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_positioning_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_positioningquick.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_positioningquick_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_printsupport.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_printsupport_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_protobuf.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_protobuf_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qml.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qml_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmlcompiler_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmlcore.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmlcore_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmldebug_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmldom_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmlintegration.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmlintegration_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmllocalstorage.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmllocalstorage_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmlmodels.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmlmodels_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmltest.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmltest_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmltyperegistrar_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmlworkerscript.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmlworkerscript_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmlxmllistmodel.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_qmlxmllistmodel_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quick.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quick3dspatialaudio_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quick_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quickcontrols2.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quickcontrols2_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quickcontrols2impl.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quickcontrols2impl_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quickcontrolstestutilsprivate_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2quickimpl.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2quickimpl_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2utils.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2utils_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quickeffects_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quicklayouts.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quicklayouts_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quickparticles_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quickshapes_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quicktemplates2.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quicktemplates2_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quicktestutilsprivate_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quickwidgets.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_quickwidgets_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_shadertools.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_shadertools_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_spatialaudio.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_spatialaudio_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_sql.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_sql_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_svg.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_svg_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_svgwidgets.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_svgwidgets_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_testlib.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_testlib_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_tools_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_uiplugin.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_uitools.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_uitools_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_webchannel.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_webchannel_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_websockets.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_websockets_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_widgets.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_widgets_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_xml.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_xml_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/modules/qt_lib_zlib_private.pri:
C:/Qt/6.5.1/mingw_64/mkspecs/features/qt_functions.prf:
C:/Qt/6.5.1/mingw_64/mkspecs/features/qt_config.prf:
C:/Qt/6.5.1/mingw_64/mkspecs/win32-g++/qmake.conf:
C:/Qt/6.5.1/mingw_64/mkspecs/features/spec_post.prf:
.qmake.stash:
C:/Qt/6.5.1/mingw_64/mkspecs/features/exclusive_builds.prf:
C:/Qt/6.5.1/mingw_64/mkspecs/features/toolchain.prf:
C:/Qt/6.5.1/mingw_64/mkspecs/features/default_pre.prf:
C:/Qt/6.5.1/mingw_64/mkspecs/features/win32/default_pre.prf:
C:/Qt/6.5.1/mingw_64/mkspecs/features/resolve_config.prf:
C:/Qt/6.5.1/mingw_64/mkspecs/features/exclusive_builds_post.prf:
C:/Qt/6.5.1/mingw_64/mkspecs/features/default_post.prf:
C:/Qt/6.5.1/mingw_64/mkspecs/features/lrelease.prf:
C:/Qt/6.5.1/mingw_64/mkspecs/features/qml_debug.prf:
C:/Qt/6.5.1/mingw_64/mkspecs/features/entrypoint.prf:
C:/Qt/6.5.1/mingw_64/mkspecs/features/precompile_header.prf:
C:/Qt/6.5.1/mingw_64/mkspecs/features/warn_on.prf:
C:/Qt/6.5.1/mingw_64/mkspecs/features/qt.prf:
C:/Qt/6.5.1/mingw_64/mkspecs/features/resources_functions.prf:
C:/Qt/6.5.1/mingw_64/mkspecs/features/resources.prf:
C:/Qt/6.5.1/mingw_64/mkspecs/features/moc.prf:
C:/Qt/6.5.1/mingw_64/mkspecs/features/win32/opengl.prf:
C:/Qt/6.5.1/mingw_64/mkspecs/features/uic.prf:
C:/Qt/6.5.1/mingw_64/mkspecs/features/qmake_use.prf:
C:/Qt/6.5.1/mingw_64/mkspecs/features/file_copies.prf:
C:/Qt/6.5.1/mingw_64/mkspecs/features/win32/windows.prf:
C:/Qt/6.5.1/mingw_64/mkspecs/features/testcase_targets.prf:
C:/Qt/6.5.1/mingw_64/mkspecs/features/exceptions.prf:
C:/Qt/6.5.1/mingw_64/mkspecs/features/yacc.prf:
C:/Qt/6.5.1/mingw_64/mkspecs/features/lex.prf:
q_basedonQt.pro:
C:/Qt/6.5.1/mingw_64/lib/Qt6Widgets.prl:
C:/Qt/6.5.1/mingw_64/lib/Qt6Gui.prl:
C:/Qt/6.5.1/mingw_64/lib/Qt6WebSockets.prl:
C:/Qt/6.5.1/mingw_64/lib/Qt6Network.prl:
C:/Qt/6.5.1/mingw_64/lib/Qt6Core.prl:
C:/Qt/6.5.1/mingw_64/lib/Qt6EntryPoint.prl:
C:/Qt/6.5.1/mingw_64/mkspecs/features/build_pass.prf:
src.qrc:
debug/qmake_qmake_qm_files.qrc:
release/qmake_qmake_qm_files.qrc:
qmake: FORCE
	@$(QMAKE) -o Makefile q_basedonQt.pro -spec win32-g++ CONFIG+=debug CONFIG+=qml_debug

qmake_all: FORCE

make_first: debug-make_first release-make_first  FORCE
all: debug-all release-all  FORCE
clean: debug-clean release-clean  FORCE
distclean: debug-distclean release-distclean  FORCE
	-$(DEL_FILE) Makefile
	-$(DEL_FILE) .qmake.stash

debug-mocclean:
	$(MAKE) -f $(MAKEFILE).Debug mocclean
release-mocclean:
	$(MAKE) -f $(MAKEFILE).Release mocclean
mocclean: debug-mocclean release-mocclean

debug-mocables:
	$(MAKE) -f $(MAKEFILE).Debug mocables
release-mocables:
	$(MAKE) -f $(MAKEFILE).Release mocables
mocables: debug-mocables release-mocables

check: first

benchmark: first
FORCE:

.SUFFIXES:

$(MAKEFILE).Debug: Makefile
$(MAKEFILE).Release: Makefile
