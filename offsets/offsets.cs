// Growtopia x64 offsets - generated 2026-08-22 06:21:49Z
public static class Offsets {
    public const Int64 SendPacket = 0xCC6C80; // SendPacket(int type, std::string* text, ENetPeer* peer) - pr
    public const Int64 SendPacketRaw = 0xCC6DA0; // SendPacketRaw(int type, void* data, int len, ENetPeer* peer,
    public const Int64 ProcessTankUpdatePacket = 0xBCB030; // incoming PACKET_* dispatcher
    public const Int64 VariantListSerializeFromMem = 0x13079C0; // VariantList::SerializeFromMem
    public const Int64 PacketTypeDispatcher = 0xA931F0; // 
    public const Int64 PacketLengthValidator = 0xCC3D10; // 
    public const Int64 TrackPacketSender = 0xC00390; // 
    public const Int64 ENetHostConnectSetup = 0xA92DD0; // 
    public const Int64 PlayerItems_AddItem = 0xCCBB80; // 
    public const Int64 PlayerItems_HaveRoomForItem = 0xCCCD10; // 
    public const Int64 PlayerItems_RemoveItem = 0xCCE490; // 
    public const Int64 InventoryIllegalItemPurge = 0xCCE5E0; // 
    public const Int64 ItemsDatLoader = 0xCE2930; // 
    public const Int64 ItemValidator = 0xCE23D0; // 
    public const Int64 ItemHashCheck = 0xCB42C0; // 
    public const Int64 ItemSurfaceRender = 0xAC4850; // 
    public const Int64 ChooseVisual = 0xD02E80; // 
    public const Int64 World_Load = 0x14DA290; // 
    public const Int64 WorldVersionCheck = 0xBCB030; // 
    public const Int64 TileExtraParser = 0xCF4280; // 
    public const Int64 WhiteDoorLookup = 0x14D9A90; // 
    public const Int64 TilesheetLoader = 0xAB35C0; // 
    public const Int64 BgItemMapValidator = 0xCE3170; // 
    public const Int64 NetAvatar_OnAvatarBePaintBalled = 0xB76F50; // 
    public const Int64 PunchHackDetector = 0xB7BA50; // 
    public const Int64 PunchNoTileHandler = 0xA31790; // 
    public const Int64 HarvestInteraction = 0xA9BF00; // 
    public const Int64 CameraManager = 0xAAFA10; // 
    public const Int64 DialogBuilder = 0xD7E230; // 
    public const Int64 BannerDialogBuilder = 0xDF9D30; // 
    public const Int64 EnableAllButtonsEntity = 0x125D8F0; // 
    public const Int64 Controller_PushController = 0xE0F800; // 
    public const Int64 Controller_PopController = 0xE0F5E0; // 
    public const Int64 Controller_PushChildController = 0x11183E0; // 
    public const Int64 Controller_OnActivate = 0xE48A40; // 
    public const Int64 Controller_Deactivate = 0xE48680; // 
    public const Int64 Controller_Release = 0xA06020; // 
    public const Int64 UIController_OnActivate = 0x116D180; // 
    public const Int64 UIController_OnDeactivate = 0x116D770; // 
    public const Int64 UIController_RemoveScreenView = 0x116D9F0; // 
    public const Int64 ParticleEmitter_GetPaintballColor = 0xE97AC0; // 
    public const Int64 RTFont_GetColorFromString = 0xDE6ED0; // 
    public const Int64 ResourceManager_GetSurfaceResource = 0x12CF090; // 
    public const Int64 VideoModeManager_SetVideoMode = 0xE38D20; // 
    public const Int64 VideoModeManager_SetFullscreen = 0xE38630; // 
    public const Int64 VideoModeManager_AddVideoMode = 0xE35F60; // self-naming anchor: AddVideoMode logs its own name once; a 5
    public const Int64 VideoModeManager_GetCustomVideoModes = 0xE36520; // 
    public const Int64 VideoModeManager_OnWMSize = 0xE38700; // 
    public const Int64 IAPManager_LoadCurrenciesConfig = 0x12231C0; // 
    public const Int64 IAPManager_ctor = 0x122F2F0; // 
    public const Int64 App_Kill = 0xA04FD0; // 
    public const Int64 StoreBuyPacketPath = 0xDF5FA0; // 
    public const Int64 TileCoordinateHandler = 0xA2FD40; // 
    public const Int64 LogDisplayEntityBuilder = 0x12614E0; // NOT LogToConsole: the sole owner of this string also refs Ge
    public const Int64 ItemRendererXmlLoader = 0x1052C70; // parses GameData/ItemRenderers/*.xml: ItemRenderer/StateMachi
    public const Int64 BattlePetConfigLoader = 0xC4EC70; // 
    public const Int64 OwlsOfAthenaPets_RenderPet = 0x7F69B0; // 
    public const Int64 Flying2Pets_RenderPet = 0x96C8F0; // 
    public const Int64 Scepter_RenderPet = 0x71F770; // 
    public const Int64 OwlsOfAthenaPets_OnRespawned = 0x7E1AC0; // 
    public const Int64 Flying2Pets_OnRespawned = 0x9574B0; // 
    public const Int64 FactionIconLoader = 0xB71590; // 
    public const Int64 PlayerProgression = 0x1726B70; // 
    public const Int64 TextOverlayActionHandler = 0xBC79A0; // msg|/file|/imageFile|/delayMS| overlay+audio handler
    public const Int64 InventoryTabUI = 0x113B540; // growid|/tabblocks|/tabseeds|/taball| inventory tabs
    public const Int64 CaptchaInputDialog = 0xD8D680; // 
    public const Int64 AuthClient_Login = 0x173BEA0; // 
    public const Int64 WorldTileMap = 0xD0A720; // the tile-map container: dimensions + tile count
    public const Int64 TileLookupGuard = 0xA47150; // tile lookup / punch target resolution
    public const Int64 TilesheetPageLoader = 0xD8FA30; // tile sheet texture loader
    public const Int64 WorldValidation = 0x1183170; // world validation pass
    public const Int64 WeaponDamageTierText = 0xC91660; // weapon damage tier description
    public const Int64 GrowtorialButton = 0xD42B80; // 
    public const Int64 WorldLockText = 0xB82CF0; // 
    public const Int64 SeedTreeItemPath = 0xD6E0A0; // 
    public const Int64 TileDefinitionsLoader = 0xCAF830; // 
    public const Int64 WeatherEffectText = 0xC88DB0; // 
    public const Int64 ItemEffectVariantDispatcher = 0xB8B900; // second On* dispatcher (43 handlers): item/cosmetic effect va
    public const Int64 OnDeathEquipTagHandler = 0x1059020; // also OnEquipTag; death + equip-tag handling
    public const Int64 OnDisconnectedHandler = 0xBC0B00; // 
    public const Int64 OnErrorFinishHandler = 0xAF2630; // also OnFinish
    public const Int64 OnOverMoveHandler = 0x123A020; // also OnOverEnd; hover/drag move
    public const Int64 OnEventHandler = 0x10F2E10; // 
    public const Int64 OnRenderHandler = 0x12AE1F0; // 
    public const Int64 OnFakeScrollToEntity = 0x12A0220; // 
    public const Int64 OnDeleteHandler = 0x1791F20; // 
    public const Int64 OnButtonSelectedHandler = 0xD5DAA0; // 
    public const Int64 TradeHandler = 0xE09F60; // 
    public const Int64 TradeOtherPlayerGuard = 0xE08820; // 
    public const Int64 StateMachineTransitions = 0x10BB990; // item-renderer state-machine transitions
    public const Int64 AnimCurveKeyFrameParser = 0x108E970; // animation curve/keyframe parser
    public const Int64 SpriteAnimStateParser = 0x1095910; // sprite animation: playOnState/isLoop
    public const Int64 AnimTimeParser = 0x1090460; // 
    public const Int64 ParticleEmitterParser = 0xE97AC0; // particle emitter definitions
    public const Int64 RendererConditionParser = 0x10BDC50; // state-machine <Condition> evaluation
    public const Int64 SpriteRenderParser = 0x95D070; // 
    public const Int64 LoginPacketBuilder = 0xE4AC10; // 
    public const Int64 TileActionBuilder = 0xB7DDE0; // 
    public const Int64 DialogButtonBuilder = 0x117BAD0; // 
    public const Int64 NetAvatarSpawnHandler = 0xBC5E90; // 
    public const Int64 GameUpdatePacketSerializer = 0xA95340; // 
    public const Int64 NetAvatarNetIDEmitter = 0xBC3310; // 
    public const Int64 IAPPurchaseValidation = 0xDA4040; // 
    public const Int64 OnVariantDispatcher = 0xBBA490; // 
    public const Int64 PunchAction = 0xE66180; // 
    public const Int64 GetApp = 0xA01B30; // leaf without unwind data; not a .pdata entry
    public const Int64 GetClient = 0xA92DB0; // kAppClientOffset = 0xB10 (derived)
    public const Int64 GetPacketProcessor = 0xBB51D0; // kAppPacketProcessorOffset = 0x1258 (derived)
    public const Int64 GetLocalAvatar = 0xBB53A0; // kPacketProcessorLocalAvatarOffset = 0x1D0 (derived)
    public static readonly (uint Table, string Name, uint Rva)[] Bindings = {
        (0x0201FFE0, "_G", 0x016614A0),
        (0x0201FFE0, "package", 0x0166C860),
        (0x0201FFE0, "coroutine", 0x01661B10),
        (0x0201FFE0, "table", 0x01662A80),
        (0x0201FFE0, "io", 0x01664290),
        (0x0201FFE0, "os", 0x01664E80),
        (0x0201FFE0, "string", 0x01668E00),
        (0x0201FFE0, "math", 0x0166A5C0),
        (0x0201FFE0, "utf8", 0x01669760),
        (0x0201FFE0, "debug", 0x0166BA00),
        (0x02020C80, "assert", 0x01660430),
        (0x02020C80, "collectgarbage", 0x01660DE0),
        (0x02020C80, "dofile", 0x016603A0),
        (0x02020C80, "error", 0x01660AF0),
        (0x02020C80, "getmetatable", 0x01660B70),
        (0x02020C80, "ipairs", 0x01661160),
        (0x02020C80, "loadfile", 0x016611B0),
        (0x02020C80, "load", 0x016602A0),
        (0x02020C80, "next", 0x01661060),
        (0x02020C80, "pairs", 0x016610C0),
        (0x02020C80, "pcall", 0x016605D0),
        (0x02020C80, "print", 0x01660760),
        (0x02020C80, "warn", 0x01660850),
        (0x02020C80, "rawequal", 0x01660C80),
        (0x02020C80, "rawlen", 0x01660CD0),
        (0x02020C80, "rawget", 0x01660D30),
        (0x02020C80, "rawset", 0x01660D80),
        (0x02020C80, "select", 0x01660510),
        (0x02020C80, "setmetatable", 0x01660BD0),
        (0x02020C80, "tonumber", 0x01660900),
        (0x02020C80, "tostring", 0x01660730),
        (0x02020C80, "type", 0x01661000),
        (0x02020C80, "xpcall", 0x01660670),
        (0x020210B0, "create", 0x016615D0),
        (0x020210B0, "resume", 0x01661520),
        (0x020210B0, "running", 0x016617B0),
        (0x020210B0, "status", 0x016616D0),
        (0x020210B0, "wrap", 0x01661630),
        (0x020210B0, "yield", 0x016616A0),
        (0x020210B0, "isyieldable", 0x01661740),
        (0x020210B0, "close", 0x016617E0),
        (0x020212B0, "concat", 0x016620C0),
        (0x020212B0, "insert", 0x01661B60),
        (0x020212B0, "pack", 0x016622F0),
        (0x020212B0, "unpack", 0x016623A0),
        (0x020212B0, "remove", 0x01661CF0),
        (0x020212B0, "move", 0x01661E70),
        (0x020212B0, "sort", 0x01662490),
        (0x02021440, "close", 0x01663320),
        (0x02021440, "flush", 0x016630D0),
        (0x02021440, "input", 0x01662AD0),
        (0x02021440, "lines", 0x01662C40),
        (0x02021440, "open", 0x01663410),
        (0x02021440, "output", 0x01662B60),
        (0x02021440, "popen", 0x01663550),
        (0x02021440, "read", 0x01662D60),
        (0x02021440, "tmpfile", 0x01663630),
        (0x02021440, "type", 0x016631E0),
        (0x02021440, "write", 0x01662E30),
        (0x02021500, "read", 0x01662DD0),
        (0x02021500, "write", 0x01662EA0),
        (0x02021500, "lines", 0x01662BF0),
        (0x02021500, "flush", 0x01663160),
        (0x02021500, "seek", 0x01662F10),
        (0x02021500, "close", 0x016632B0),
        (0x02021500, "setvbuf", 0x01663000),
        (0x02021590, "__gc", 0x016633B0),
        (0x02021590, "__close", 0x016633B0),
        (0x02021590, "__tostring", 0x01663250),
        (0x02021900, "clock", 0x01664BF0),
        (0x02021900, "date", 0x016644A0),
        (0x02021900, "difftime", 0x016648B0),
        (0x02021900, "execute", 0x016649F0),
        (0x02021900, "exit", 0x01664970),
        (0x02021900, "getenv", 0x01664BB0),
        (0x02021900, "remove", 0x01664A60),
        (0x02021900, "rename", 0x01664AC0),
        (0x02021900, "setlocale", 0x01664900),
        (0x02021900, "time", 0x01664720),
        (0x02021900, "tmpname", 0x01664B40),
        (0x02021B90, "byte", 0x016653A0),
        (0x02021B90, "char", 0x016654C0),
        (0x02021B90, "dump", 0x016655A0),
        (0x02021BD0, "format", 0x01665AD0),
        (0x02021BD0, "gmatch", 0x01665770),
        (0x02021BD0, "gsub", 0x01665880),
        (0x02021BD0, "len", 0x01664ED0),
        (0x02021BD0, "lower", 0x01665090),
        (0x02021C30, "rep", 0x01665210),
        (0x02021C30, "reverse", 0x01664FF0),
        (0x02021C30, "sub", 0x01664F00),
        (0x02021C30, "upper", 0x01665150),
        (0x02021C30, "pack", 0x01666310),
        (0x02021C30, "packsize", 0x016669E0),
        (0x02021C30, "unpack", 0x01666B80),
        (0x02022280, "offset", 0x01669370),
        (0x02022280, "codepoint", 0x01669040),
        (0x02022280, "char", 0x01669250),
        (0x02022280, "len", 0x01668ED0),
        (0x02022280, "codes", 0x016694F0),
        (0x020223A0, "abs", 0x016697E0),
        (0x020223A0, "acos", 0x01669910),
        (0x020223A0, "asin", 0x016698E0),
        (0x020223A0, "atan", 0x01669940),
        (0x020223A0, "ceil", 0x01669A80),
        (0x020223A0, "cos", 0x01669880),
        (0x020223A0, "deg", 0x01669E50),
        (0x020223A0, "exp", 0x01669E20),
        (0x020223A0, "tointeger", 0x016699A0),
        (0x020223A0, "floor", 0x01669A00),
        (0x020223A0, "fmod", 0x01669B00),
        (0x020223A0, "ult", 0x01669D10),
        (0x020223A0, "log", 0x01669D60),
        (0x020223A0, "max", 0x01669F70),
        (0x020223A0, "min", 0x01669ED0),
        (0x020223A0, "modf", 0x01669C00),
        (0x020223A0, "rad", 0x01669E90),
        (0x020223A0, "sin", 0x01669850),
        (0x020223A0, "sqrt", 0x01669CD0),
        (0x020223A0, "tan", 0x016698B0),
        (0x020223A0, "type", 0x0166A010),
        (0x02022620, "debug", 0x0166B660),
        (0x02022620, "getuservalue", 0x0166A7C0),
        (0x02022620, "gethook", 0x0166B4E0),
        (0x02022620, "getinfo", 0x0166A8C0),
        (0x02022620, "getlocal", 0x0166AD50),
        (0x02022620, "getregistry", 0x0166A700),
        (0x02022620, "getmetatable", 0x0166A720),
        (0x02022620, "getupvalue", 0x0166B040),
        (0x02022620, "upvaluejoin", 0x0166B1D0),
        (0x02022620, "upvalueid", 0x0166B150),
        (0x02022620, "setuservalue", 0x0166A840),
        (0x02022620, "sethook", 0x0166B2F0),
        (0x02022620, "setlocal", 0x0166AED0),
        (0x02022620, "setmetatable", 0x0166A760),
        (0x02022620, "setupvalue", 0x0166B0C0),
        (0x02022620, "traceback", 0x0166B850),
        (0x02022620, "setcstacklimit", 0x0166B920),
        (0x024E19E0, "CreateContext", 0x01634C20),
        (0x024E19E0, "LoadFontFace", 0x01634D40),
        (0x024E19E0, "RegisterTag", 0x01634E80),
        (0x024E1A20, "contexts", 0x01634F80),
        (0x024E1A20, "key_identifier", 0x01634FC0),
        (0x024E1A20, "key_modifier", 0x01635000),
        (0x024E1A60, "red", 0x01636D10),
        (0x024E1A60, "green", 0x01636D60),
        (0x024E1A60, "blue", 0x01636DB0),
        (0x024E1A60, "alpha", 0x01636E00),
        (0x024E1A60, "rgba", 0x01636E50),
        (0x024E1AC0, "red", 0x01636ED0),
        (0x024E1AC0, "green", 0x01636F30),
        (0x024E1AC0, "blue", 0x01636F90),
        (0x024E1AC0, "alpha", 0x01636FF0),
        (0x024E1AC0, "rgba", 0x01637050),
        (0x024E1B20, "red", 0x01637720),
        (0x024E1B20, "green", 0x01637770),
        (0x024E1B20, "blue", 0x016377C0),
        (0x024E1B20, "alpha", 0x01637810),
        (0x024E1B20, "rgba", 0x01637860),
        (0x024E1B80, "red", 0x016378F0),
        (0x024E1B80, "green", 0x01637960),
        (0x024E1B80, "blue", 0x016379D0),
        (0x024E1B80, "alpha", 0x01637A40),
        (0x024E1B80, "rgba", 0x01637AB0),
        (0x024E1BE0, "AddEventListener", 0x01638400),
        (0x024E1BE0, "CreateDocument", 0x01638910),
        (0x024E1BE0, "LoadDocument", 0x01638A20),
        (0x024E1BE0, "Render", 0x01638B10),
        (0x024E1BE0, "UnloadAllDocuments", 0x01638B40),
        (0x024E1BE0, "UnloadDocument", 0x01638B60),
        (0x024E1BE0, "Update", 0x01638BA0),
        (0x024E1BE0, "OpenDataModel", 0x01637FB0),
        (0x024E1BE0, "ProcessMouseMove", 0x01637FF0),
        (0x024E1BE0, "ProcessMouseButtonDown", 0x01638070),
        (0x024E1BE0, "ProcessMouseButtonUp", 0x016380D0),
        (0x024E1BE0, "ProcessMouseWheel", 0x01638130),
        (0x024E1BE0, "ProcessMouseLeave", 0x016381A0),
        (0x024E1BE0, "IsMouseInteracting", 0x016381D0),
        (0x024E1BE0, "ProcessKeyDown", 0x01638200),
        (0x024E1BE0, "ProcessKeyUp", 0x01638260),
        (0x024E1BE0, "ProcessTextInput", 0x016382C0),
        (0x024E1D00, "dimensions", 0x01638BD0),
        (0x024E1D00, "documents", 0x01638C40),
        (0x024E1D00, "dp_ratio", 0x01638CB0),
        (0x024E1D00, "focus_element", 0x01638CF0),
        (0x024E1D00, "hover_element", 0x01638D50),
        (0x024E1D00, "name", 0x01638DB0),
        (0x024E1D00, "root_element", 0x01638E10),
        (0x024E1DD0, "PullToFront", 0x01639AE0),
        (0x024E1DD0, "PushToBack", 0x01639B00),
        (0x024E1DD0, "Show", 0x01639B20),
        (0x024E1DD0, "Hide", 0x01639BA0),
        (0x024E1DD0, "Close", 0x01639BC0),
        (0x024E1DD0, "CreateElement", 0x01639BE0),
        (0x024E1DD0, "CreateTextNode", 0x01639D50),
        (0x024E1EA0, "AddEventListener", 0x0163A730),
        (0x024E1EA0, "AppendChild", 0x0163A990),
        (0x024E1EA0, "Blur", 0x0163AA90),
        (0x024E1EA0, "Click", 0x0163AAB0),
        (0x024E1EA0, "DispatchEvent", 0x0163AAD0),
        (0x024E1EA0, "Focus", 0x0163B020),
        (0x024E1EA0, "GetAttribute", 0x0163B040),
        (0x024E1EA0, "GetElementById", 0x0163B130),
        (0x024E1EA0, "GetElementsByTagName", 0x0163B220),
        (0x024E1EA0, "QuerySelector", 0x0163B530),
        (0x024E1EA0, "QuerySelectorAll", 0x0163B620),
        (0x024E1EA0, "Matches", 0x0163B930),
        (0x024E1EA0, "HasAttribute", 0x0163BA00),
        (0x024E1EA0, "HasChildNodes", 0x0163BAD0),
        (0x024E1EA0, "InsertBefore", 0x0163BB00),
        (0x024E1EA0, "IsClassSet", 0x0163BC20),
        (0x024E1EA0, "RemoveAttribute", 0x0163BCF0),
        (0x024E1EA0, "RemoveChild", 0x0163BDB0),
        (0x024E1EA0, "ReplaceChild", 0x0163BE20),
        (0x024E1EA0, "ScrollIntoView", 0x0163BF50),
        (0x024E1EA0, "SetAttribute", 0x0163BF80),
        (0x024E1EA0, "SetClass", 0x0163C0F0),
        (0x024E2010, "attributes", 0x0163C1E0),
        (0x024E2010, "child_nodes", 0x0163C250),
        (0x024E2010, "class_name", 0x0163C2C0),
        (0x024E2010, "client_left", 0x0163C380),
        (0x024E2010, "client_height", 0x0163C3E0),
        (0x024E2010, "client_top", 0x0163C440),
        (0x024E2010, "client_width", 0x0163C4A0),
        (0x024E2010, "first_child", 0x0163C500),
        (0x024E2010, "id", 0x0163C560),
        (0x024E2010, "inner_rml", 0x0163C5C0),
        (0x024E2010, "last_child", 0x0163C670),
        (0x024E2010, "next_sibling", 0x0163C6D0),
        (0x024E2010, "offset_height", 0x0163C730),
        (0x024E2010, "offset_left", 0x0163C790),
        (0x024E2010, "offset_parent", 0x0163C7F0),
        (0x024E2010, "offset_top", 0x0163C850),
        (0x024E2010, "offset_width", 0x0163C8B0),
        (0x024E2010, "owner_document", 0x0163C910),
        (0x024E2010, "parent_node", 0x0163C970),
        (0x024E2010, "previous_sibling", 0x0163C9D0),
        (0x024E2010, "scroll_height", 0x0163CA30),
        (0x024E2010, "scroll_left", 0x0163CA90),
        (0x024E2010, "scroll_top", 0x0163CAF0),
        (0x024E2010, "scroll_width", 0x0163CB50),
        (0x024E2010, "style", 0x0163CBB0),
        (0x024E2010, "tag_name", 0x0163CC20),
        (0x024E21C0, "class_name", 0x0163CC80),
        (0x024E21C0, "id", 0x0163CD70),
        (0x024E21C0, "inner_rml", 0x0163CE60),
        (0x024E21C0, "scroll_left", 0x0163CF60),
        (0x024E21C0, "scroll_top", 0x0163CFD0),
        (0x024E22F0, "current_element", 0x0163EF80),
        (0x024E22F0, "type", 0x0163EFE0),
        (0x024E22F0, "target_element", 0x0163F1C0),
        (0x024E22F0, "parameters", 0x0163F220),
        (0x024E2340, "DotProduct", 0x0163FFB0),
        (0x024E2340, "Normalise", 0x01640020),
        (0x024E2340, "Rotate", 0x016400D0),
        (0x024E2380, "x", 0x016401A0),
        (0x024E2380, "y", 0x016401F0),
        (0x024E2380, "magnitude", 0x01640240),
        (0x024E23F0, "x", 0x01640AA0),
        (0x024E23F0, "y", 0x01640AF0),
        (0x024E23F0, "magnitude", 0x01640B40),
        (0x024E2480, "disabled", 0x01641670),
        (0x024E2480, "name", 0x016416C0),
        (0x024E2480, "value", 0x01641770),
        (0x024E24C0, "disabled", 0x01641830),
        (0x024E24C0, "name", 0x016418A0),
        (0x024E24C0, "value", 0x01641990),
        (0x024E2500, "Select", 0x01641DE0),
        (0x024E2500, "SetSelection", 0x01641E00),
        (0x024E2500, "GetSelection", 0x01641E50),
        (0x024E2540, "checked", 0x01641F30),
        (0x024E2540, "maxlength", 0x01642020),
        (0x024E2540, "size", 0x01642120),
        (0x024E2540, "max", 0x01642210),
        (0x024E2540, "min", 0x01642300),
        (0x024E2540, "step", 0x016423F0),
        (0x024E25B0, "checked", 0x016424E0),
        (0x024E25B0, "maxlength", 0x01642640),
        (0x024E25B0, "size", 0x01642740),
        (0x024E25B0, "max", 0x01642830),
        (0x024E25B0, "min", 0x01642930),
        (0x024E25B0, "step", 0x01642A30),
        (0x024E2620, "Add", 0x01643010),
        (0x024E2620, "Remove", 0x016431C0),
        (0x024E2620, "RemoveAll", 0x01643310),
        (0x024E26B0, "Select", 0x01643870),
        (0x024E26B0, "SetSelection", 0x01643890),
        (0x024E26B0, "GetSelection", 0x016438E0),
        (0x024E26F0, "cols", 0x016439C0),
        (0x024E26F0, "maxlength", 0x01643A10),
        (0x024E26F0, "rows", 0x01643A60),
        (0x024E26F0, "wordwrap", 0x01643AB0),
        (0x024E2740, "cols", 0x01643B00),
        (0x024E2740, "maxlength", 0x01643B60),
        (0x024E2740, "rows", 0x01643BC0),
        (0x024E2740, "wordwrap", 0x01643C20),
    };
}
