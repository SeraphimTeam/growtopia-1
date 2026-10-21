// Growtopia x64 offsets - generated 2026-10-21 10:47:56Z
public static class Offsets {
    public const Int64 SendPacket = 0xC3F8E0; // SendPacket(int type, std::string* text, ENetPeer* peer) - pr
    public const Int64 SendPacketRaw = 0xC3FA00; // SendPacketRaw(int type, void* data, int len, ENetPeer* peer,
    public const Int64 ProcessTankUpdatePacket = 0xB3A380; // incoming PACKET_* dispatcher
    public const Int64 VariantListSerializeFromMem = 0x127D3E0; // VariantList::SerializeFromMem
    public const Int64 PacketTypeDispatcher = 0xA0A730; // 
    public const Int64 PacketLengthValidator = 0xC3C970; // 
    public const Int64 TrackPacketSender = 0xB6F930; // 
    public const Int64 ENetHostConnectSetup = 0xA0A310; // 
    public const Int64 PlayerItems_AddItem = 0xC44840; // 
    public const Int64 PlayerItems_HaveRoomForItem = 0xC459D0; // 
    public const Int64 PlayerItems_RemoveItem = 0xC47150; // 
    public const Int64 InventoryIllegalItemPurge = 0xC472A0; // 
    public const Int64 ItemsDatLoader = 0xC5B760; // 
    public const Int64 ItemValidator = 0xC5B200; // 
    public const Int64 ItemHashCheck = 0xC2CE90; // 
    public const Int64 ItemSurfaceRender = 0xA3BBE0; // 
    public const Int64 ChooseVisual = 0xC7BBC0; // 
    public const Int64 World_Load = 0x143AB90; // 
    public const Int64 WorldVersionCheck = 0xB3A380; // 
    public const Int64 TileExtraParser = 0xC6D090; // 
    public const Int64 WhiteDoorLookup = 0x143A390; // 
    public const Int64 TilesheetLoader = 0xA2AE20; // 
    public const Int64 BgItemMapValidator = 0xC5BFA0; // 
    public const Int64 NetAvatar_OnAvatarBePaintBalled = 0xAE33D0; // 
    public const Int64 PunchHackDetector = 0xAE7ED0; // 
    public const Int64 PunchNoTileHandler = 0x9A8750; // 
    public const Int64 HarvestInteraction = 0xA13420; // 
    public const Int64 CameraManager = 0xA27250; // 
    public const Int64 DialogBuilder = 0xCF8790; // 
    public const Int64 BannerDialogBuilder = 0xD752B0; // 
    public const Int64 EnableAllButtonsEntity = 0x11D67B0; // 
    public const Int64 Controller_PushController = 0xD89EE0; // 
    public const Int64 Controller_PopController = 0xD89CC0; // 
    public const Int64 Controller_PushChildController = 0x1082530; // 
    public const Int64 Controller_OnActivate = 0xDC5320; // 
    public const Int64 Controller_Deactivate = 0xDC4F60; // 
    public const Int64 Controller_Release = 0x97DDB0; // 
    public const Int64 UIController_OnActivate = 0x10D7550; // 
    public const Int64 UIController_OnDeactivate = 0x10D7B40; // 
    public const Int64 UIController_RemoveScreenView = 0x10D7DC0; // 
    public const Int64 ParticleEmitter_GetPaintballColor = 0xE144A0; // 
    public const Int64 RTFont_GetColorFromString = 0xD62B80; // 
    public const Int64 ResourceManager_GetSurfaceResource = 0x1244490; // 
    public const Int64 VideoModeManager_SetVideoMode = 0xDB4770; // 
    public const Int64 VideoModeManager_SetFullscreen = 0xDB4080; // 
    public const Int64 VideoModeManager_AddVideoMode = 0xDB19B0; // self-naming anchor: AddVideoMode logs its own name once; a 5
    public const Int64 VideoModeManager_GetCustomVideoModes = 0xDB1F70; // 
    public const Int64 VideoModeManager_OnWMSize = 0xDB4150; // 
    public const Int64 IAPManager_LoadCurrenciesConfig = 0x119BEA0; // 
    public const Int64 IAPManager_ctor = 0x11A81C0; // 
    public const Int64 App_Kill = 0x97CCF0; // 
    public const Int64 StoreBuyPacketPath = 0xD71090; // 
    public const Int64 TileCoordinateHandler = 0x9A6D00; // 
    public const Int64 LogDisplayEntityBuilder = 0x11DA3A0; // NOT LogToConsole: the sole owner of this string also refs Ge
    public const Int64 ItemRendererXmlLoader = 0xFC8CD0; // parses GameData/ItemRenderers/*.xml: ItemRenderer/StateMachi
    public const Int64 BattlePetConfigLoader = 0xBC73C0; // 
    public const Int64 OwlsOfAthenaPets_RenderPet = 0x76F030; // 
    public const Int64 Flying2Pets_RenderPet = 0x8E4F50; // 
    public const Int64 Scepter_RenderPet = 0x697650; // 
    public const Int64 OwlsOfAthenaPets_OnRespawned = 0x75A120; // 
    public const Int64 Flying2Pets_OnRespawned = 0x8CFB60; // 
    public const Int64 FactionIconLoader = 0xADD9D0; // 
    public const Int64 TextOverlayActionHandler = 0xB36DE0; // msg|/file|/imageFile|/delayMS| overlay+audio handler
    public const Int64 InventoryTabUI = 0x10A5C80; // growid|/tabblocks|/tabseeds|/taball| inventory tabs
    public const Int64 CaptchaInputDialog = 0xD07BE0; // 
    public const Int64 WorldTileMap = 0xC83460; // the tile-map container: dimensions + tile count
    public const Int64 TileLookupGuard = 0x9BE110; // tile lookup / punch target resolution
    public const Int64 TilesheetPageLoader = 0xD09F90; // tile sheet texture loader
    public const Int64 WorldValidation = 0x10EDFF0; // world validation pass
    public const Int64 WeaponDamageTierText = 0xC09D00; // weapon damage tier description
    public const Int64 GrowtorialButton = 0xCBDB50; // 
    public const Int64 WorldLockText = 0xAEF240; // 
    public const Int64 SeedTreeItemPath = 0xCE85D0; // 
    public const Int64 TileDefinitionsLoader = 0xC28360; // 
    public const Int64 WeatherEffectText = 0xC01450; // 
    public const Int64 ItemEffectVariantDispatcher = 0xAF9CD0; // second On* dispatcher (43 handlers): item/cosmetic effect va
    public const Int64 OnDeathEquipTagHandler = 0xFCF640; // also OnEquipTag; death + equip-tag handling
    public const Int64 OnDisconnectedHandler = 0xB2FB50; // 
    public const Int64 OnErrorFinishHandler = 0xA69930; // also OnFinish
    public const Int64 OnOverMoveHandler = 0x11B2EE0; // also OnOverEnd; hover/drag move
    public const Int64 OnEventHandler = 0x1060AD0; // 
    public const Int64 OnRenderHandler = 0x12235F0; // 
    public const Int64 OnFakeScrollToEntity = 0x1215620; // 
    public const Int64 OnButtonSelectedHandler = 0xD0D830; // 
    public const Int64 TradeHandler = 0xD84640; // 
    public const Int64 TradeOtherPlayerGuard = 0xD82F00; // 
    public const Int64 StateMachineTransitions = 0x1028F70; // item-renderer state-machine transitions
    public const Int64 AnimCurveKeyFrameParser = 0x1004EF0; // animation curve/keyframe parser
    public const Int64 SpriteAnimStateParser = 0x100BE90; // sprite animation: playOnState/isLoop
    public const Int64 AnimTimeParser = 0x10069E0; // 
    public const Int64 ParticleEmitterParser = 0xE144A0; // particle emitter definitions
    public const Int64 RendererConditionParser = 0x102B3B0; // state-machine <Condition> evaluation
    public const Int64 SpriteRenderParser = 0x8D5720; // 
    public const Int64 LoginPacketBuilder = 0xDC7660; // 
    public const Int64 TileActionBuilder = 0xAEA340; // 
    public const Int64 DialogButtonBuilder = 0x10E6940; // 
    public const Int64 NetAvatarSpawnHandler = 0xB352D0; // 
    public const Int64 GameUpdatePacketSerializer = 0xA0C860; // 
    public const Int64 NetAvatarNetIDEmitter = 0xB32360; // 
    public const Int64 IAPPurchaseValidation = 0xD1E060; // 
    public const Int64 OnVariantDispatcher = 0xB294E0; // 
    public const Int64 PunchAction = 0xDE29B0; // 
    public const Int64 GetApp = 0x9798F0; // leaf without unwind data; not a .pdata entry
    public const Int64 GetClient = 0xA0A2F0; // kAppClientOffset = 0xAD0 (derived)
    public const Int64 GetPacketProcessor = 0xB24090; // kAppPacketProcessorOffset = 0x1218 (derived)
    public const Int64 GetLocalAvatar = 0xB243F0; // kPacketProcessorLocalAvatarOffset = 0x1D0 (derived)
    public static readonly (uint Table, string Name, uint Rva)[] Bindings = {
        (0x01DA26C0, "_G", 0x015C1FA0),
        (0x01DA26C0, "package", 0x015CD360),
        (0x01DA26C0, "coroutine", 0x015C2610),
        (0x01DA26C0, "table", 0x015C3580),
        (0x01DA26C0, "io", 0x015C4D90),
        (0x01DA26C0, "os", 0x015C5980),
        (0x01DA26C0, "string", 0x015C9900),
        (0x01DA26C0, "math", 0x015CB0C0),
        (0x01DA26C0, "utf8", 0x015CA260),
        (0x01DA26C0, "debug", 0x015CC500),
        (0x01DA3360, "assert", 0x015C0F30),
        (0x01DA3360, "collectgarbage", 0x015C18E0),
        (0x01DA3360, "dofile", 0x015C0EA0),
        (0x01DA3360, "error", 0x015C15F0),
        (0x01DA3360, "getmetatable", 0x015C1670),
        (0x01DA3360, "ipairs", 0x015C1C60),
        (0x01DA3360, "loadfile", 0x015C1CB0),
        (0x01DA3360, "load", 0x015C0DA0),
        (0x01DA3360, "next", 0x015C1B60),
        (0x01DA3360, "pairs", 0x015C1BC0),
        (0x01DA3360, "pcall", 0x015C10D0),
        (0x01DA3360, "print", 0x015C1260),
        (0x01DA3360, "warn", 0x015C1350),
        (0x01DA3360, "rawequal", 0x015C1780),
        (0x01DA3360, "rawlen", 0x015C17D0),
        (0x01DA3360, "rawget", 0x015C1830),
        (0x01DA3360, "rawset", 0x015C1880),
        (0x01DA3360, "select", 0x015C1010),
        (0x01DA3360, "setmetatable", 0x015C16D0),
        (0x01DA3360, "tonumber", 0x015C1400),
        (0x01DA3360, "tostring", 0x015C1230),
        (0x01DA3360, "type", 0x015C1B00),
        (0x01DA3360, "xpcall", 0x015C1170),
        (0x01DA3790, "create", 0x015C20D0),
        (0x01DA3790, "resume", 0x015C2020),
        (0x01DA3790, "running", 0x015C22B0),
        (0x01DA3790, "status", 0x015C21D0),
        (0x01DA3790, "wrap", 0x015C2130),
        (0x01DA3790, "yield", 0x015C21A0),
        (0x01DA3790, "isyieldable", 0x015C2240),
        (0x01DA3790, "close", 0x015C22E0),
        (0x01DA3990, "concat", 0x015C2BC0),
        (0x01DA3990, "insert", 0x015C2660),
        (0x01DA3990, "pack", 0x015C2DF0),
        (0x01DA3990, "unpack", 0x015C2EA0),
        (0x01DA3990, "remove", 0x015C27F0),
        (0x01DA3990, "move", 0x015C2970),
        (0x01DA3990, "sort", 0x015C2F90),
        (0x01DA3B20, "close", 0x015C3E20),
        (0x01DA3B20, "flush", 0x015C3BD0),
        (0x01DA3B20, "input", 0x015C35D0),
        (0x01DA3B20, "lines", 0x015C3740),
        (0x01DA3B20, "open", 0x015C3F10),
        (0x01DA3B20, "output", 0x015C3660),
        (0x01DA3B20, "popen", 0x015C4050),
        (0x01DA3B20, "read", 0x015C3860),
        (0x01DA3B20, "tmpfile", 0x015C4130),
        (0x01DA3B20, "type", 0x015C3CE0),
        (0x01DA3B20, "write", 0x015C3930),
        (0x01DA3BE0, "read", 0x015C38D0),
        (0x01DA3BE0, "write", 0x015C39A0),
        (0x01DA3BE0, "lines", 0x015C36F0),
        (0x01DA3BE0, "flush", 0x015C3C60),
        (0x01DA3BE0, "seek", 0x015C3A10),
        (0x01DA3BE0, "close", 0x015C3DB0),
        (0x01DA3BE0, "setvbuf", 0x015C3B00),
        (0x01DA3C70, "__gc", 0x015C3EB0),
        (0x01DA3C70, "__close", 0x015C3EB0),
        (0x01DA3C70, "__tostring", 0x015C3D50),
        (0x01DA3FE0, "clock", 0x015C56F0),
        (0x01DA3FE0, "date", 0x015C4FA0),
        (0x01DA3FE0, "difftime", 0x015C53B0),
        (0x01DA3FE0, "execute", 0x015C54F0),
        (0x01DA3FE0, "exit", 0x015C5470),
        (0x01DA3FE0, "getenv", 0x015C56B0),
        (0x01DA3FE0, "remove", 0x015C5560),
        (0x01DA3FE0, "rename", 0x015C55C0),
        (0x01DA3FE0, "setlocale", 0x015C5400),
        (0x01DA3FE0, "time", 0x015C5220),
        (0x01DA3FE0, "tmpname", 0x015C5640),
        (0x01DA4270, "byte", 0x015C5EA0),
        (0x01DA4270, "char", 0x015C5FC0),
        (0x01DA4270, "dump", 0x015C60A0),
        (0x01DA42B0, "format", 0x015C65D0),
        (0x01DA42B0, "gmatch", 0x015C6270),
        (0x01DA42B0, "gsub", 0x015C6380),
        (0x01DA42B0, "len", 0x015C59D0),
        (0x01DA42B0, "lower", 0x015C5B90),
        (0x01DA4310, "rep", 0x015C5D10),
        (0x01DA4310, "reverse", 0x015C5AF0),
        (0x01DA4310, "sub", 0x015C5A00),
        (0x01DA4310, "upper", 0x015C5C50),
        (0x01DA4310, "pack", 0x015C6E10),
        (0x01DA4310, "packsize", 0x015C74E0),
        (0x01DA4310, "unpack", 0x015C7680),
        (0x01DA4960, "offset", 0x015C9E70),
        (0x01DA4960, "codepoint", 0x015C9B40),
        (0x01DA4960, "char", 0x015C9D50),
        (0x01DA4960, "len", 0x015C99D0),
        (0x01DA4960, "codes", 0x015C9FF0),
        (0x01DA4A80, "abs", 0x015CA2E0),
        (0x01DA4A80, "acos", 0x015CA410),
        (0x01DA4A80, "asin", 0x015CA3E0),
        (0x01DA4A80, "atan", 0x015CA440),
        (0x01DA4A80, "ceil", 0x015CA580),
        (0x01DA4A80, "cos", 0x015CA380),
        (0x01DA4A80, "deg", 0x015CA950),
        (0x01DA4A80, "exp", 0x015CA920),
        (0x01DA4A80, "tointeger", 0x015CA4A0),
        (0x01DA4A80, "floor", 0x015CA500),
        (0x01DA4A80, "fmod", 0x015CA600),
        (0x01DA4A80, "ult", 0x015CA810),
        (0x01DA4A80, "log", 0x015CA860),
        (0x01DA4A80, "max", 0x015CAA70),
        (0x01DA4A80, "min", 0x015CA9D0),
        (0x01DA4A80, "modf", 0x015CA700),
        (0x01DA4A80, "rad", 0x015CA990),
        (0x01DA4A80, "sin", 0x015CA350),
        (0x01DA4A80, "sqrt", 0x015CA7D0),
        (0x01DA4A80, "tan", 0x015CA3B0),
        (0x01DA4A80, "type", 0x015CAB10),
        (0x01DA4D00, "debug", 0x015CC160),
        (0x01DA4D00, "getuservalue", 0x015CB2C0),
        (0x01DA4D00, "gethook", 0x015CBFE0),
        (0x01DA4D00, "getinfo", 0x015CB3C0),
        (0x01DA4D00, "getlocal", 0x015CB850),
        (0x01DA4D00, "getregistry", 0x015CB200),
        (0x01DA4D00, "getmetatable", 0x015CB220),
        (0x01DA4D00, "getupvalue", 0x015CBB40),
        (0x01DA4D00, "upvaluejoin", 0x015CBCD0),
        (0x01DA4D00, "upvalueid", 0x015CBC50),
        (0x01DA4D00, "setuservalue", 0x015CB340),
        (0x01DA4D00, "sethook", 0x015CBDF0),
        (0x01DA4D00, "setlocal", 0x015CB9D0),
        (0x01DA4D00, "setmetatable", 0x015CB260),
        (0x01DA4D00, "setupvalue", 0x015CBBC0),
        (0x01DA4D00, "traceback", 0x015CC350),
        (0x01DA4D00, "setcstacklimit", 0x015CC420),
        (0x02220860, "CreateContext", 0x01595720),
        (0x02220860, "LoadFontFace", 0x01595840),
        (0x02220860, "RegisterTag", 0x01595980),
        (0x022208A0, "contexts", 0x01595A80),
        (0x022208A0, "key_identifier", 0x01595AC0),
        (0x022208A0, "key_modifier", 0x01595B00),
        (0x022208E0, "red", 0x01597810),
        (0x022208E0, "green", 0x01597860),
        (0x022208E0, "blue", 0x015978B0),
        (0x022208E0, "alpha", 0x01597900),
        (0x022208E0, "rgba", 0x01597950),
        (0x02220940, "red", 0x015979D0),
        (0x02220940, "green", 0x01597A30),
        (0x02220940, "blue", 0x01597A90),
        (0x02220940, "alpha", 0x01597AF0),
        (0x02220940, "rgba", 0x01597B50),
        (0x022209A0, "red", 0x01598220),
        (0x022209A0, "green", 0x01598270),
        (0x022209A0, "blue", 0x015982C0),
        (0x022209A0, "alpha", 0x01598310),
        (0x022209A0, "rgba", 0x01598360),
        (0x02220A00, "red", 0x015983F0),
        (0x02220A00, "green", 0x01598460),
        (0x02220A00, "blue", 0x015984D0),
        (0x02220A00, "alpha", 0x01598540),
        (0x02220A00, "rgba", 0x015985B0),
        (0x02220A60, "AddEventListener", 0x01598F00),
        (0x02220A60, "CreateDocument", 0x01599410),
        (0x02220A60, "LoadDocument", 0x01599520),
        (0x02220A60, "Render", 0x01599610),
        (0x02220A60, "UnloadAllDocuments", 0x01599640),
        (0x02220A60, "UnloadDocument", 0x01599660),
        (0x02220A60, "Update", 0x015996A0),
        (0x02220A60, "OpenDataModel", 0x01598AB0),
        (0x02220A60, "ProcessMouseMove", 0x01598AF0),
        (0x02220A60, "ProcessMouseButtonDown", 0x01598B70),
        (0x02220A60, "ProcessMouseButtonUp", 0x01598BD0),
        (0x02220A60, "ProcessMouseWheel", 0x01598C30),
        (0x02220A60, "ProcessMouseLeave", 0x01598CA0),
        (0x02220A60, "IsMouseInteracting", 0x01598CD0),
        (0x02220A60, "ProcessKeyDown", 0x01598D00),
        (0x02220A60, "ProcessKeyUp", 0x01598D60),
        (0x02220A60, "ProcessTextInput", 0x01598DC0),
        (0x02220B80, "dimensions", 0x015996D0),
        (0x02220B80, "documents", 0x01599740),
        (0x02220B80, "dp_ratio", 0x015997B0),
        (0x02220B80, "focus_element", 0x015997F0),
        (0x02220B80, "hover_element", 0x01599850),
        (0x02220B80, "name", 0x015998B0),
        (0x02220B80, "root_element", 0x01599910),
        (0x02220C50, "PullToFront", 0x0159A5E0),
        (0x02220C50, "PushToBack", 0x0159A600),
        (0x02220C50, "Show", 0x0159A620),
        (0x02220C50, "Hide", 0x0159A6A0),
        (0x02220C50, "Close", 0x0159A6C0),
        (0x02220C50, "CreateElement", 0x0159A6E0),
        (0x02220C50, "CreateTextNode", 0x0159A850),
        (0x02220D20, "AddEventListener", 0x0159B230),
        (0x02220D20, "AppendChild", 0x0159B490),
        (0x02220D20, "Blur", 0x0159B590),
        (0x02220D20, "Click", 0x0159B5B0),
        (0x02220D20, "DispatchEvent", 0x0159B5D0),
        (0x02220D20, "Focus", 0x0159BB20),
        (0x02220D20, "GetAttribute", 0x0159BB40),
        (0x02220D20, "GetElementById", 0x0159BC30),
        (0x02220D20, "GetElementsByTagName", 0x0159BD20),
        (0x02220D20, "QuerySelector", 0x0159C030),
        (0x02220D20, "QuerySelectorAll", 0x0159C120),
        (0x02220D20, "Matches", 0x0159C430),
        (0x02220D20, "HasAttribute", 0x0159C500),
        (0x02220D20, "HasChildNodes", 0x0159C5D0),
        (0x02220D20, "InsertBefore", 0x0159C600),
        (0x02220D20, "IsClassSet", 0x0159C720),
        (0x02220D20, "RemoveAttribute", 0x0159C7F0),
        (0x02220D20, "RemoveChild", 0x0159C8B0),
        (0x02220D20, "ReplaceChild", 0x0159C920),
        (0x02220D20, "ScrollIntoView", 0x0159CA50),
        (0x02220D20, "SetAttribute", 0x0159CA80),
        (0x02220D20, "SetClass", 0x0159CBF0),
        (0x02220E90, "attributes", 0x0159CCE0),
        (0x02220E90, "child_nodes", 0x0159CD50),
        (0x02220E90, "class_name", 0x0159CDC0),
        (0x02220E90, "client_left", 0x0159CE80),
        (0x02220E90, "client_height", 0x0159CEE0),
        (0x02220E90, "client_top", 0x0159CF40),
        (0x02220E90, "client_width", 0x0159CFA0),
        (0x02220E90, "first_child", 0x0159D000),
        (0x02220E90, "id", 0x0159D060),
        (0x02220E90, "inner_rml", 0x0159D0C0),
        (0x02220E90, "last_child", 0x0159D170),
        (0x02220E90, "next_sibling", 0x0159D1D0),
        (0x02220E90, "offset_height", 0x0159D230),
        (0x02220E90, "offset_left", 0x0159D290),
        (0x02220E90, "offset_parent", 0x0159D2F0),
        (0x02220E90, "offset_top", 0x0159D350),
        (0x02220E90, "offset_width", 0x0159D3B0),
        (0x02220E90, "owner_document", 0x0159D410),
        (0x02220E90, "parent_node", 0x0159D470),
        (0x02220E90, "previous_sibling", 0x0159D4D0),
        (0x02220E90, "scroll_height", 0x0159D530),
        (0x02220E90, "scroll_left", 0x0159D590),
        (0x02220E90, "scroll_top", 0x0159D5F0),
        (0x02220E90, "scroll_width", 0x0159D650),
        (0x02220E90, "style", 0x0159D6B0),
        (0x02220E90, "tag_name", 0x0159D720),
        (0x02221040, "class_name", 0x0159D780),
        (0x02221040, "id", 0x0159D870),
        (0x02221040, "inner_rml", 0x0159D960),
        (0x02221040, "scroll_left", 0x0159DA60),
        (0x02221040, "scroll_top", 0x0159DAD0),
        (0x02221170, "current_element", 0x0159FA80),
        (0x02221170, "type", 0x0159FAE0),
        (0x02221170, "target_element", 0x0159FCC0),
        (0x02221170, "parameters", 0x0159FD20),
        (0x022211C0, "DotProduct", 0x015A0AB0),
        (0x022211C0, "Normalise", 0x015A0B20),
        (0x022211C0, "Rotate", 0x015A0BD0),
        (0x02221200, "x", 0x015A0CA0),
        (0x02221200, "y", 0x015A0CF0),
        (0x02221200, "magnitude", 0x015A0D40),
        (0x02221270, "x", 0x015A15A0),
        (0x02221270, "y", 0x015A15F0),
        (0x02221270, "magnitude", 0x015A1640),
        (0x02221300, "disabled", 0x015A2170),
        (0x02221300, "name", 0x015A21C0),
        (0x02221300, "value", 0x015A2270),
        (0x02221340, "disabled", 0x015A2330),
        (0x02221340, "name", 0x015A23A0),
        (0x02221340, "value", 0x015A2490),
        (0x02221380, "Select", 0x015A28E0),
        (0x02221380, "SetSelection", 0x015A2900),
        (0x02221380, "GetSelection", 0x015A2950),
        (0x022213C0, "checked", 0x015A2A30),
        (0x022213C0, "maxlength", 0x015A2B20),
        (0x022213C0, "size", 0x015A2C20),
        (0x022213C0, "max", 0x015A2D10),
        (0x022213C0, "min", 0x015A2E00),
        (0x022213C0, "step", 0x015A2EF0),
        (0x02221430, "checked", 0x015A2FE0),
        (0x02221430, "maxlength", 0x015A3140),
        (0x02221430, "size", 0x015A3240),
        (0x02221430, "max", 0x015A3330),
        (0x02221430, "min", 0x015A3430),
        (0x02221430, "step", 0x015A3530),
        (0x022214A0, "Add", 0x015A3B10),
        (0x022214A0, "Remove", 0x015A3CC0),
        (0x022214A0, "RemoveAll", 0x015A3E10),
        (0x02221530, "Select", 0x015A4370),
        (0x02221530, "SetSelection", 0x015A4390),
        (0x02221530, "GetSelection", 0x015A43E0),
        (0x02221570, "cols", 0x015A44C0),
        (0x02221570, "maxlength", 0x015A4510),
        (0x02221570, "rows", 0x015A4560),
        (0x02221570, "wordwrap", 0x015A45B0),
        (0x022215C0, "cols", 0x015A4600),
        (0x022215C0, "maxlength", 0x015A4660),
        (0x022215C0, "rows", 0x015A46C0),
        (0x022215C0, "wordwrap", 0x015A4720),
    };
}
