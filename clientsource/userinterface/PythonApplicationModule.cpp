// ara

#ifdef ENABLE_DRAGON_SOUL_SYSTEM
	PyModule_AddIntConstant(poModule, "ENABLE_DRAGON_SOUL_SYSTEM",	1);
#else
	PyModule_AddIntConstant(poModule, "ENABLE_DRAGON_SOUL_SYSTEM",	0);
#endif

// altına ekle

#ifdef ENABLE_SPECIAL_STORAGE
	PyModule_AddIntConstant(poModule, "ENABLE_SPECIAL_STORAGE",	1);
#else
	PyModule_AddIntConstant(poModule, "ENABLE_SPECIAL_STORAGE",	0);
#endif