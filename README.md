# Growtopia offsets

**Latest Growtopia client**

| Version | Build Number | Updated (UTC) |
|---|---:|---|
| v5.53 | `0260820262` | 2026-07-30 10:57:34 UTC |

**Image**

| | |
|---|---|
| image base | `0x140000000` |
| `.text` | `0x00001000-0x01E99E58` |
| SHA-256 | `ca6ce348cb20cb71d07498ab689244a309b45917471fdeee9083ed84723575e8` |
| functions in `.pdata` | 79521 |
| generated | 2026-08-11 02:48:27Z |

| Status | Count | Meaning |
| ------ | ----: | ------- |
| VERIFIED | 403 | Address is a `.pdata` function start in the executable `.text` segment |
| CHECK | 2 | Resolved but did not satisfy every check |
| UNRESOLVED | 1 | No single owner found for the anchor |

**Total functions/methods documented:** `405`

---

## Part 1 - Engine & gameplay functions (anchor-string resolution)

| Category | Function | Offset (RVA) | Size | Status | Anchor string / evidence |
| -------- | -------- | ------------ | ---: | ------ | ------------------------ |
| anticheat | `PunchHackDetector` | `0x00B79FF0` | 3167 | VERIFIED | `Punch hack detected!` |
| app | `GetApp` | `0x00A00390` | 8 | CHECK | `mov rax,[rip];ret pattern` |
| app | `App_Kill` | `0x00A03830` | 454 | VERIFIED | `Don't call App::Kill() again.` |
| app | `GetClient` | `0x00A91610` | - | VERIFIED | `singleton accessor chain from GetApp` |
| app | `GetPacketProcessor` | `0x00BB3650` | - | VERIFIED | `singleton accessor chain from GetApp` |
| app | `GetLocalAvatar` | `0x00BB3820` | - | CHECK | `singleton accessor chain from GetApp` |
| camera | `CameraManager` | `0x00AAE270` | 375 | VERIFIED | `warning: No camera was active` |
| combat | `PunchNoTileHandler` | `0x00A2FFE0` | 72964 | VERIFIED | `a punch was sent with no tile!` |
| combat | `HarvestInteraction` | `0x00A9A760` | 3894 | VERIFIED | `You can harvest it by punching!` |
| combat | `WeaponDamageTierText` | `0x00C87A00` | 710 | VERIFIED | `Increases the damage of all Tier 1 Weapons.<CR> `210%``` |
| combat | `PunchAction` | `0x00E573B0` | 6996 | VERIFIED | `Punch! + audio/punch_organic.wav` |
| combat | `OnDeathEquipTagHandler` | `0x0104F1C0` | 8620 | VERIFIED | `OnDeath` |
| econ | `IAPPurchaseValidation` | `0x00D94F10` | 7344 | VERIFIED | `action\|houston_validation_done + currency\| + purchaseState\|` |
| econ | `StoreBuyPacketPath` | `0x00DE6E70` | 8562 | VERIFIED | `OnStoreBuyConfirm` |
| economy | `IAPManager_LoadCurrenciesConfig` | `0x01217B60` | 1603 | VERIFIED | `IAPManager::LoadCurrenciesConfig() text.empty` |
| economy | `IAPManager_ctor` | `0x01223C90` | 510 | VERIFIED | `IAPManager::IAPManager() iapText.empty` |
| fx | `SpriteRenderParser` | `0x0095B8F0` | 344 | VERIFIED | `SpriteRender` |
| fx | `RTFont_GetColorFromString` | `0x00DD7DA0` | 117 | VERIFIED | `RTFont::GetColorFromString> Bad code` |
| fx | `ParticleEmitter_GetPaintballColor` | `0x00E88CF0` | 260 | VERIFIED | `ParticleEmitter::GetPaintballColor() un-defined color` |
| fx | `ParticleEmitterParser` | `0x00E88CF0` | 260 | VERIFIED | `Emitter` |
| fx | `AnimCurveKeyFrameParser` | `0x01084AA0` | 1507 | VERIFIED | `KeyFrame` |
| fx | `AnimTimeParser` | `0x01086590` | 508 | VERIFIED | `animTime` |
| fx | `SpriteAnimStateParser` | `0x0108BA40` | 1419 | VERIFIED | `playOnState` |
| fx | `StateMachineTransitions` | `0x010B1990` | 2749 | VERIFIED | `Transitions` |
| fx | `RendererConditionParser` | `0x010B3C50` | 806 | VERIFIED | `Condition` |
| fx | `OnRenderHandler` | `0x012A2B90` | 4477 | VERIFIED | `OnRender` |
| fx | `ResourceManager_GetSurfaceResource` | `0x012C3A30` | 781 | VERIFIED | `ResourceManager::GetSurfaceResource: Unable to load %s` |
| gfx | `VideoModeManager_AddVideoMode` | `0x00E27190` | 264 | VERIFIED | `VideoModeManager::AddVideoMode` |
| gfx | `VideoModeManager_GetCustomVideoModes` | `0x00E27750` | 436 | VERIFIED | `VideoModeManager::GetCustomVideoModes` |
| gfx | `VideoModeManager_SetFullscreen` | `0x00E29860` | 141 | VERIFIED | `VideoModeManager::SetFullscreenVideoMode` |
| gfx | `VideoModeManager_OnWMSize` | `0x00E29930` | 479 | VERIFIED | `VideoModeManager::OnWMSize` |
| gfx | `VideoModeManager_SetVideoMode` | `0x00E29F50` | 384 | VERIFIED | `VideoModeManager::SetVideoMode` |
| inventory | `ItemSurfaceRender` | `0x00AC3110` | 40115 | VERIFIED | `ERROR: Surface for item %d not loaded!` |
| inventory | `ItemHashCheck` | `0x00CAA660` | 4293 | VERIFIED | `Warning: No hash found for item %d` |
| inventory | `PlayerItems_AddItem` | `0x00CC1F20` | 315 | VERIFIED | `PlayerItems::AddItem() nullptr == pItemInfo itemID=%d` |
| inventory | `PlayerItems_HaveRoomForItem` | `0x00CC3040` | 214 | VERIFIED | `PlayerItems::HaveRoomForItem() can not be.` |
| inventory | `PlayerItems_RemoveItem` | `0x00CC47C0` | 324 | VERIFIED | `Error, can't remove all %d items of type %d from inventory` |
| inventory | `InventoryIllegalItemPurge` | `0x00CC4910` | 1256 | VERIFIED | `[Removing Illegal Item] [Glitch] %d for player` |
| inventory | `ItemValidator` | `0x00CD86C0` | 1019 | VERIFIED | `Illegal item %d in %s` |
| inventory | `ItemsDatLoader` | `0x00CD8C20` | 2065 | VERIFIED | `Bad itemID %d in %s, skipping` |
| inventory | `ChooseVisual` | `0x00CF3E30` | 620 | VERIFIED | `ChooseVisual: ItemId not found: %d` |
| net | `ENetHostConnectSetup` | `0x00A91630` | 470 | VERIFIED | `No available peers for initiating an ENet connection.` |
| net | `PacketTypeDispatcher` | `0x00A91A50` | 1392 | VERIFIED | `Got unknown packet type: %d` |
| net | `GameUpdatePacketSerializer` | `0x00A93BA0` | 185 | VERIFIED | `GameUpdatePacket data: ` |
| net | `OnErrorFinishHandler` | `0x00AF0E70` | 3511 | VERIFIED | `OnError` |
| net | `TileActionBuilder` | `0x00B7C380` | 2305 | VERIFIED | `tileY\|` |
| net | `OnDisconnectedHandler` | `0x00BBEF80` | 54 | VERIFIED | `OnDisconnected` |
| net | `ProcessTankUpdatePacket` | `0x00BC9480` | 17868 | VERIFIED | `Error reading function packet, ignoring` |
| net | `TrackPacketSender` | `0x00BFE7E0` | 3880 | VERIFIED | `Bad Track Packet , eventName not defined` |
| net | `PacketLengthValidator` | `0x00CBA0B0` | 41 | VERIFIED | `Bad packet length, ignoring message` |
| net | `SendPacket` | `0x00CBD020` | 183 | VERIFIED | `Bad peer` |
| net | `SendPacketRaw` | `0x00CBD140` | 418 | VERIFIED | `Huge Packet Size %d` |
| net | `LoginPacketBuilder` | `0x00E3BE40` | 14277 | VERIFIED | `tankIDName\| + requestedName\| + rid\|` |
| net | `DialogButtonBuilder` | `0x0116FC70` | 3790 | VERIFIED | `button\|` |
| net | `VariantListSerializeFromMem` | `0x012FC360` | 860 | VERIFIED | `unknown var type` |
| net | `AuthClient_Login` | `0x01730540` | 6320 | VERIFIED | `AuthenticationClient::login with PlayerCredentials` |
| pets | `Scepter_RenderPet` | `0x0071E060` | 866 | VERIFIED | `ScepterOfTheHonorGuardLogics::RenderPet` |
| pets | `OwlsOfAthenaPets_OnRespawned` | `0x007E03B0` | 146 | VERIFIED | `OwlsOfAthenaPetsLogics::OnRespawned` |
| pets | `OwlsOfAthenaPets_RenderPet` | `0x007F52A0` | 2339 | VERIFIED | `OwlsOfAthenaPetsLogics::RenderPet` |
| pets | `Flying2Pets_OnRespawned` | `0x00955D30` | 146 | VERIFIED | `Flying2PetsLogics::OnRespawned` |
| pets | `Flying2Pets_RenderPet` | `0x0096B170` | 1959 | VERIFIED | `Flying2PetsLogics::RenderPet` |
| pets | `BattlePetConfigLoader` | `0x00C4D280` | 989 | VERIFIED | `Can't load BattlePet info config: %s, error: %s, offset: %d` |
| physics | `ItemRendererXmlLoader` | `0x01048E40` | 9899 | VERIFIED | `PhysicsBody %s wasn't loaded correct.` |
| player | `FactionIconLoader` | `0x00B6FB50` | 13239 | VERIFIED | `Error loading Faction icons` |
| player | `NetAvatar_OnAvatarBePaintBalled` | `0x00B754F0` | 582 | VERIFIED | `NetAvatar::OnAvatarBePaintBalled sourceNetID is invalid=%d` |
| player | `NetAvatarNetIDEmitter` | `0x00BC1790` | 248 | VERIFIED | `netID\|` |
| player | `NetAvatarSpawnHandler` | `0x00BC4310` | 3660 | VERIFIED | `netID\| + mstate\| + smstate\|` |
| player | `PlayerProgression` | `0x0171B210` | 1056 | VERIFIED | `player.progression.%s` |
| trade | `TradeOtherPlayerGuard` | `0x00DF96F0` | 4432 | VERIFIED | `other player doesn't exist!` |
| trade | `TradeHandler` | `0x00DFAE30` | 2294 | VERIFIED | `CancelTrade` |
| ui | `Controller_Release` | `0x00A04880` | 489 | VERIFIED | `Controller::Release` |
| ui | `ItemEffectVariantDispatcher` | `0x00B89DF0` | 11776 | VERIFIED | `OnBalloonBunnyUpdate` |
| ui | `OnVariantDispatcher` | `0x00BB8910` | 21440 | VERIFIED | `OnZoomCamera + OnPinchMod + OnActivateMenusRequest + OnStoreRequest` |
| ui | `TextOverlayActionHandler` | `0x00BC5E10` | 3712 | VERIFIED | `audioFile\|` |
| ui | `GrowtorialButton` | `0x00D33B10` | 4370 | VERIFIED | `Error with add_commnty_growtorial_bttn parms` |
| ui | `OnButtonSelectedHandler` | `0x00D4E9C0` | 7045 | VERIFIED | `OnButtonSelected` |
| ui | `DialogBuilder` | `0x00D6F150` | 30966 | VERIFIED | `Error with add_searchable_item_list parms` |
| ui | `CaptchaInputDialog` | `0x00D7E5A0` | 7496 | VERIFIED | `\|CaptchaID\|` |
| ui | `BannerDialogBuilder` | `0x00DEAC00` | 12770 | VERIFIED | `Error with add_banner parms` |
| ui | `Controller_PopController` | `0x00E004B0` | 544 | VERIFIED | `Controller::PopController` |
| ui | `Controller_PushController` | `0x00E006D0` | 721 | VERIFIED | `Controller::PushController` |
| ui | `Controller_Deactivate` | `0x00E398B0` | 638 | VERIFIED | `Controller::Deactivate` |
| ui | `Controller_OnActivate` | `0x00E39C70` | 475 | VERIFIED | `Controller::OnActivate` |
| ui | `OnEventHandler` | `0x010E78D0` | 3202 | VERIFIED | `OnEvent` |
| ui | `Controller_PushChildController` | `0x0110CEA0` | 690 | VERIFIED | `Controller::PushChildController` |
| ui | `InventoryTabUI` | `0x01130030` | 3392 | VERIFIED | `tabclothes\|` |
| ui | `UIController_OnActivate` | `0x01161320` | 1512 | VERIFIED | `UIController::OnActivate` |
| ui | `UIController_OnDeactivate` | `0x01161910` | 622 | VERIFIED | `UIController::OnDeactivate` |
| ui | `UIController_RemoveScreenView` | `0x01161B90` | 1139 | VERIFIED | `UIController::RemoveScreenView` |
| ui | `OnOverMoveHandler` | `0x0122E9C0` | 5273 | VERIFIED | `OnOverMove` |
| ui | `EnableAllButtonsEntity` | `0x01252290` | 1526 | VERIFIED | `EnableAllButtonsEntity() nullptr == pEnt` |
| ui | `LogDisplayEntityBuilder` | `0x01255E80` | 2351 | VERIFIED | `LogDisplayEntity` |
| ui | `OnFakeScrollToEntity` | `0x01294BC0` | 4626 | VERIFIED | `OnFakeScrollToEntity` |
| ui | `OnDeleteHandler` | `0x017865C0` | 1273 | VERIFIED | `OnDelete` |
| world | `TileCoordinateHandler` | `0x00A2E590` | 228 | VERIFIED | `tileX == %d, tileY == %d` |
| world | `TileLookupGuard` | `0x00A459A0` | 1184 | VERIFIED | `Error, no tile` |
| world | `TilesheetLoader` | `0x00AB1E20` | 832 | VERIFIED | `Error, tile(%d) haven't texture file` |
| world | `WorldLockText` | `0x00B81200` | 13171 | VERIFIED | ` per World Lock` |
| world | `WorldVersionCheck` | `0x00BC9480` | 17868 | VERIFIED | `ERROR: Wrong world version: %d, dataSize %d` |
| world | `WeatherEffectText` | `0x00C7F150` | 3273 | VERIFIED | `Replaces any other active Weather Effect.` |
| world | `TileDefinitionsLoader` | `0x00CA5BD0` | 15673 | VERIFIED | `Please wait, loading tile definitions...` |
| world | `BgItemMapValidator` | `0x00CD9460` | 435 | VERIFIED | `Removing illegal bg item %d from map %s` |
| world | `TileExtraParser` | `0x00CEA570` | 23652 | VERIFIED | `Bad type of %d detected in tileextra. WorldName: %s` |
| world | `WorldTileMap` | `0x00CFB6B0` | 1213 | VERIFIED | `WorldTileMap: size: %d, %d; count: %d` |
| world | `SeedTreeItemPath` | `0x00D5EFC0` | 11101 | VERIFIED | `itemIDseed2tree_itemAmount` |
| world | `TilesheetPageLoader` | `0x00D80950` | 1057 | VERIFIED | `Error loading tiles_page2.rttex` |
| world | `WorldValidation` | `0x01177310` | 616 | VERIFIED | `Validing World Now %s` |
| world | `WhiteDoorLookup` | `0x014CE2A0` | 754 | VERIFIED | `White door missing from map %s` |
| world | `World_Load` | `0x014CEA80` | 1173 | VERIFIED | `World::Load: Version %d. f: %d, Name: %s` |

---

## Part 2 - Script-binding metadata (RmlUi + Lua)

The only true `{name -> address}` metadata in the binary: 16-byte `{const char* name, void* fn}` rows. Every row below has a function pointer landing exactly on a `.pdata` function start.

> Property tables store **bare** names (`attributes`, `x`) - the `get_`/`set_` spelling seen in write-ups is an annotation, not shipped data. Names are unique per table, not globally: `x` belongs to both `Vector2f` and `Vector2i`.

| Table | Method | Offset (RVA) |
| ----- | ------ | ------------ |
| `0x02011900` | `_G` | `0x01655B40` |
| `0x02011900` | `package` | `0x01660F00` |
| `0x02011900` | `coroutine` | `0x016561B0` |
| `0x02011900` | `table` | `0x01657120` |
| `0x02011900` | `io` | `0x01658930` |
| `0x02011900` | `os` | `0x01659520` |
| `0x02011900` | `string` | `0x0165D4A0` |
| `0x02011900` | `math` | `0x0165EC60` |
| `0x02011900` | `utf8` | `0x0165DE00` |
| `0x02011900` | `debug` | `0x016600A0` |
| `0x020125A0` | `assert` | `0x01654AD0` |
| `0x020125A0` | `collectgarbage` | `0x01655480` |
| `0x020125A0` | `dofile` | `0x01654A40` |
| `0x020125A0` | `error` | `0x01655190` |
| `0x020125A0` | `getmetatable` | `0x01655210` |
| `0x020125A0` | `ipairs` | `0x01655800` |
| `0x020125A0` | `loadfile` | `0x01655850` |
| `0x020125A0` | `load` | `0x01654940` |
| `0x020125A0` | `next` | `0x01655700` |
| `0x020125A0` | `pairs` | `0x01655760` |
| `0x020125A0` | `pcall` | `0x01654C70` |
| `0x020125A0` | `print` | `0x01654E00` |
| `0x020125A0` | `warn` | `0x01654EF0` |
| `0x020125A0` | `rawequal` | `0x01655320` |
| `0x020125A0` | `rawlen` | `0x01655370` |
| `0x020125A0` | `rawget` | `0x016553D0` |
| `0x020125A0` | `rawset` | `0x01655420` |
| `0x020125A0` | `select` | `0x01654BB0` |
| `0x020125A0` | `setmetatable` | `0x01655270` |
| `0x020125A0` | `tonumber` | `0x01654FA0` |
| `0x020125A0` | `tostring` | `0x01654DD0` |
| `0x020125A0` | `type` | `0x016556A0` |
| `0x020125A0` | `xpcall` | `0x01654D10` |
| `0x020129D0` | `create` | `0x01655C70` |
| `0x020129D0` | `resume` | `0x01655BC0` |
| `0x020129D0` | `running` | `0x01655E50` |
| `0x020129D0` | `status` | `0x01655D70` |
| `0x020129D0` | `wrap` | `0x01655CD0` |
| `0x020129D0` | `yield` | `0x01655D40` |
| `0x020129D0` | `isyieldable` | `0x01655DE0` |
| `0x020129D0` | `close` | `0x01655E80` |
| `0x02012BD0` | `concat` | `0x01656760` |
| `0x02012BD0` | `insert` | `0x01656200` |
| `0x02012BD0` | `pack` | `0x01656990` |
| `0x02012BD0` | `unpack` | `0x01656A40` |
| `0x02012BD0` | `remove` | `0x01656390` |
| `0x02012BD0` | `move` | `0x01656510` |
| `0x02012BD0` | `sort` | `0x01656B30` |
| `0x02012D60` | `close` | `0x016579C0` |
| `0x02012D60` | `flush` | `0x01657770` |
| `0x02012D60` | `input` | `0x01657170` |
| `0x02012D60` | `lines` | `0x016572E0` |
| `0x02012D60` | `open` | `0x01657AB0` |
| `0x02012D60` | `output` | `0x01657200` |
| `0x02012D60` | `popen` | `0x01657BF0` |
| `0x02012D60` | `read` | `0x01657400` |
| `0x02012D60` | `tmpfile` | `0x01657CD0` |
| `0x02012D60` | `type` | `0x01657880` |
| `0x02012D60` | `write` | `0x016574D0` |
| `0x02012E20` | `read` | `0x01657470` |
| `0x02012E20` | `write` | `0x01657540` |
| `0x02012E20` | `lines` | `0x01657290` |
| `0x02012E20` | `flush` | `0x01657800` |
| `0x02012E20` | `seek` | `0x016575B0` |
| `0x02012E20` | `close` | `0x01657950` |
| `0x02012E20` | `setvbuf` | `0x016576A0` |
| `0x02012EB0` | `__gc` | `0x01657A50` |
| `0x02012EB0` | `__close` | `0x01657A50` |
| `0x02012EB0` | `__tostring` | `0x016578F0` |
| `0x02013220` | `clock` | `0x01659290` |
| `0x02013220` | `date` | `0x01658B40` |
| `0x02013220` | `difftime` | `0x01658F50` |
| `0x02013220` | `execute` | `0x01659090` |
| `0x02013220` | `exit` | `0x01659010` |
| `0x02013220` | `getenv` | `0x01659250` |
| `0x02013220` | `remove` | `0x01659100` |
| `0x02013220` | `rename` | `0x01659160` |
| `0x02013220` | `setlocale` | `0x01658FA0` |
| `0x02013220` | `time` | `0x01658DC0` |
| `0x02013220` | `tmpname` | `0x016591E0` |
| `0x020134B0` | `byte` | `0x01659A40` |
| `0x020134B0` | `char` | `0x01659B60` |
| `0x020134B0` | `dump` | `0x01659C40` |
| `0x020134F0` | `format` | `0x0165A170` |
| `0x020134F0` | `gmatch` | `0x01659E10` |
| `0x020134F0` | `gsub` | `0x01659F20` |
| `0x020134F0` | `len` | `0x01659570` |
| `0x020134F0` | `lower` | `0x01659730` |
| `0x02013550` | `rep` | `0x016598B0` |
| `0x02013550` | `reverse` | `0x01659690` |
| `0x02013550` | `sub` | `0x016595A0` |
| `0x02013550` | `upper` | `0x016597F0` |
| `0x02013550` | `pack` | `0x0165A9B0` |
| `0x02013550` | `packsize` | `0x0165B080` |
| `0x02013550` | `unpack` | `0x0165B220` |
| `0x02013BA0` | `offset` | `0x0165DA10` |
| `0x02013BA0` | `codepoint` | `0x0165D6E0` |
| `0x02013BA0` | `char` | `0x0165D8F0` |
| `0x02013BA0` | `len` | `0x0165D570` |
| `0x02013BA0` | `codes` | `0x0165DB90` |
| `0x02013CC0` | `abs` | `0x0165DE80` |
| `0x02013CC0` | `acos` | `0x0165DFB0` |
| `0x02013CC0` | `asin` | `0x0165DF80` |
| `0x02013CC0` | `atan` | `0x0165DFE0` |
| `0x02013CC0` | `ceil` | `0x0165E120` |
| `0x02013CC0` | `cos` | `0x0165DF20` |
| `0x02013CC0` | `deg` | `0x0165E4F0` |
| `0x02013CC0` | `exp` | `0x0165E4C0` |
| `0x02013CC0` | `tointeger` | `0x0165E040` |
| `0x02013CC0` | `floor` | `0x0165E0A0` |
| `0x02013CC0` | `fmod` | `0x0165E1A0` |
| `0x02013CC0` | `ult` | `0x0165E3B0` |
| `0x02013CC0` | `log` | `0x0165E400` |
| `0x02013CC0` | `max` | `0x0165E610` |
| `0x02013CC0` | `min` | `0x0165E570` |
| `0x02013CC0` | `modf` | `0x0165E2A0` |
| `0x02013CC0` | `rad` | `0x0165E530` |
| `0x02013CC0` | `sin` | `0x0165DEF0` |
| `0x02013CC0` | `sqrt` | `0x0165E370` |
| `0x02013CC0` | `tan` | `0x0165DF50` |
| `0x02013CC0` | `type` | `0x0165E6B0` |
| `0x02013F40` | `debug` | `0x0165FD00` |
| `0x02013F40` | `getuservalue` | `0x0165EE60` |
| `0x02013F40` | `gethook` | `0x0165FB80` |
| `0x02013F40` | `getinfo` | `0x0165EF60` |
| `0x02013F40` | `getlocal` | `0x0165F3F0` |
| `0x02013F40` | `getregistry` | `0x0165EDA0` |
| `0x02013F40` | `getmetatable` | `0x0165EDC0` |
| `0x02013F40` | `getupvalue` | `0x0165F6E0` |
| `0x02013F40` | `upvaluejoin` | `0x0165F870` |
| `0x02013F40` | `upvalueid` | `0x0165F7F0` |
| `0x02013F40` | `setuservalue` | `0x0165EEE0` |
| `0x02013F40` | `sethook` | `0x0165F990` |
| `0x02013F40` | `setlocal` | `0x0165F570` |
| `0x02013F40` | `setmetatable` | `0x0165EE00` |
| `0x02013F40` | `setupvalue` | `0x0165F760` |
| `0x02013F40` | `traceback` | `0x0165FEF0` |
| `0x02013F40` | `setcstacklimit` | `0x0165FFC0` |
| `0x024D09E0` | `CreateContext` | `0x016292C0` |
| `0x024D09E0` | `LoadFontFace` | `0x016293E0` |
| `0x024D09E0` | `RegisterTag` | `0x01629520` |
| `0x024D0A20` | `contexts` | `0x01629620` |
| `0x024D0A20` | `key_identifier` | `0x01629660` |
| `0x024D0A20` | `key_modifier` | `0x016296A0` |
| `0x024D0A60` | `red` | `0x0162B3B0` |
| `0x024D0A60` | `green` | `0x0162B400` |
| `0x024D0A60` | `blue` | `0x0162B450` |
| `0x024D0A60` | `alpha` | `0x0162B4A0` |
| `0x024D0A60` | `rgba` | `0x0162B4F0` |
| `0x024D0AC0` | `red` | `0x0162B570` |
| `0x024D0AC0` | `green` | `0x0162B5D0` |
| `0x024D0AC0` | `blue` | `0x0162B630` |
| `0x024D0AC0` | `alpha` | `0x0162B690` |
| `0x024D0AC0` | `rgba` | `0x0162B6F0` |
| `0x024D0B20` | `red` | `0x0162BDC0` |
| `0x024D0B20` | `green` | `0x0162BE10` |
| `0x024D0B20` | `blue` | `0x0162BE60` |
| `0x024D0B20` | `alpha` | `0x0162BEB0` |
| `0x024D0B20` | `rgba` | `0x0162BF00` |
| `0x024D0B80` | `red` | `0x0162BF90` |
| `0x024D0B80` | `green` | `0x0162C000` |
| `0x024D0B80` | `blue` | `0x0162C070` |
| `0x024D0B80` | `alpha` | `0x0162C0E0` |
| `0x024D0B80` | `rgba` | `0x0162C150` |
| `0x024D0BE0` | `AddEventListener` | `0x0162CAA0` |
| `0x024D0BE0` | `CreateDocument` | `0x0162CFB0` |
| `0x024D0BE0` | `LoadDocument` | `0x0162D0C0` |
| `0x024D0BE0` | `Render` | `0x0162D1B0` |
| `0x024D0BE0` | `UnloadAllDocuments` | `0x0162D1E0` |
| `0x024D0BE0` | `UnloadDocument` | `0x0162D200` |
| `0x024D0BE0` | `Update` | `0x0162D240` |
| `0x024D0BE0` | `OpenDataModel` | `0x0162C650` |
| `0x024D0BE0` | `ProcessMouseMove` | `0x0162C690` |
| `0x024D0BE0` | `ProcessMouseButtonDown` | `0x0162C710` |
| `0x024D0BE0` | `ProcessMouseButtonUp` | `0x0162C770` |
| `0x024D0BE0` | `ProcessMouseWheel` | `0x0162C7D0` |
| `0x024D0BE0` | `ProcessMouseLeave` | `0x0162C840` |
| `0x024D0BE0` | `IsMouseInteracting` | `0x0162C870` |
| `0x024D0BE0` | `ProcessKeyDown` | `0x0162C8A0` |
| `0x024D0BE0` | `ProcessKeyUp` | `0x0162C900` |
| `0x024D0BE0` | `ProcessTextInput` | `0x0162C960` |
| `0x024D0D00` | `dimensions` | `0x0162D270` |
| `0x024D0D00` | `documents` | `0x0162D2E0` |
| `0x024D0D00` | `dp_ratio` | `0x0162D350` |
| `0x024D0D00` | `focus_element` | `0x0162D390` |
| `0x024D0D00` | `hover_element` | `0x0162D3F0` |
| `0x024D0D00` | `name` | `0x0162D450` |
| `0x024D0D00` | `root_element` | `0x0162D4B0` |
| `0x024D0DD0` | `PullToFront` | `0x0162E180` |
| `0x024D0DD0` | `PushToBack` | `0x0162E1A0` |
| `0x024D0DD0` | `Show` | `0x0162E1C0` |
| `0x024D0DD0` | `Hide` | `0x0162E240` |
| `0x024D0DD0` | `Close` | `0x0162E260` |
| `0x024D0DD0` | `CreateElement` | `0x0162E280` |
| `0x024D0DD0` | `CreateTextNode` | `0x0162E3F0` |
| `0x024D0EA0` | `AddEventListener` | `0x0162EDD0` |
| `0x024D0EA0` | `AppendChild` | `0x0162F030` |
| `0x024D0EA0` | `Blur` | `0x0162F130` |
| `0x024D0EA0` | `Click` | `0x0162F150` |
| `0x024D0EA0` | `DispatchEvent` | `0x0162F170` |
| `0x024D0EA0` | `Focus` | `0x0162F6C0` |
| `0x024D0EA0` | `GetAttribute` | `0x0162F6E0` |
| `0x024D0EA0` | `GetElementById` | `0x0162F7D0` |
| `0x024D0EA0` | `GetElementsByTagName` | `0x0162F8C0` |
| `0x024D0EA0` | `QuerySelector` | `0x0162FBD0` |
| `0x024D0EA0` | `QuerySelectorAll` | `0x0162FCC0` |
| `0x024D0EA0` | `Matches` | `0x0162FFD0` |
| `0x024D0EA0` | `HasAttribute` | `0x016300A0` |
| `0x024D0EA0` | `HasChildNodes` | `0x01630170` |
| `0x024D0EA0` | `InsertBefore` | `0x016301A0` |
| `0x024D0EA0` | `IsClassSet` | `0x016302C0` |
| `0x024D0EA0` | `RemoveAttribute` | `0x01630390` |
| `0x024D0EA0` | `RemoveChild` | `0x01630450` |
| `0x024D0EA0` | `ReplaceChild` | `0x016304C0` |
| `0x024D0EA0` | `ScrollIntoView` | `0x016305F0` |
| `0x024D0EA0` | `SetAttribute` | `0x01630620` |
| `0x024D0EA0` | `SetClass` | `0x01630790` |
| `0x024D1010` | `attributes` | `0x01630880` |
| `0x024D1010` | `child_nodes` | `0x016308F0` |
| `0x024D1010` | `class_name` | `0x01630960` |
| `0x024D1010` | `client_left` | `0x01630A20` |
| `0x024D1010` | `client_height` | `0x01630A80` |
| `0x024D1010` | `client_top` | `0x01630AE0` |
| `0x024D1010` | `client_width` | `0x01630B40` |
| `0x024D1010` | `first_child` | `0x01630BA0` |
| `0x024D1010` | `id` | `0x01630C00` |
| `0x024D1010` | `inner_rml` | `0x01630C60` |
| `0x024D1010` | `last_child` | `0x01630D10` |
| `0x024D1010` | `next_sibling` | `0x01630D70` |
| `0x024D1010` | `offset_height` | `0x01630DD0` |
| `0x024D1010` | `offset_left` | `0x01630E30` |
| `0x024D1010` | `offset_parent` | `0x01630E90` |
| `0x024D1010` | `offset_top` | `0x01630EF0` |
| `0x024D1010` | `offset_width` | `0x01630F50` |
| `0x024D1010` | `owner_document` | `0x01630FB0` |
| `0x024D1010` | `parent_node` | `0x01631010` |
| `0x024D1010` | `previous_sibling` | `0x01631070` |
| `0x024D1010` | `scroll_height` | `0x016310D0` |
| `0x024D1010` | `scroll_left` | `0x01631130` |
| `0x024D1010` | `scroll_top` | `0x01631190` |
| `0x024D1010` | `scroll_width` | `0x016311F0` |
| `0x024D1010` | `style` | `0x01631250` |
| `0x024D1010` | `tag_name` | `0x016312C0` |
| `0x024D11C0` | `class_name` | `0x01631320` |
| `0x024D11C0` | `id` | `0x01631410` |
| `0x024D11C0` | `inner_rml` | `0x01631500` |
| `0x024D11C0` | `scroll_left` | `0x01631600` |
| `0x024D11C0` | `scroll_top` | `0x01631670` |
| `0x024D12F0` | `current_element` | `0x01633620` |
| `0x024D12F0` | `type` | `0x01633680` |
| `0x024D12F0` | `target_element` | `0x01633860` |
| `0x024D12F0` | `parameters` | `0x016338C0` |
| `0x024D1340` | `DotProduct` | `0x01634650` |
| `0x024D1340` | `Normalise` | `0x016346C0` |
| `0x024D1340` | `Rotate` | `0x01634770` |
| `0x024D1380` | `x` | `0x01634840` |
| `0x024D1380` | `y` | `0x01634890` |
| `0x024D1380` | `magnitude` | `0x016348E0` |
| `0x024D13F0` | `x` | `0x01635140` |
| `0x024D13F0` | `y` | `0x01635190` |
| `0x024D13F0` | `magnitude` | `0x016351E0` |
| `0x024D1480` | `disabled` | `0x01635D10` |
| `0x024D1480` | `name` | `0x01635D60` |
| `0x024D1480` | `value` | `0x01635E10` |
| `0x024D14C0` | `disabled` | `0x01635ED0` |
| `0x024D14C0` | `name` | `0x01635F40` |
| `0x024D14C0` | `value` | `0x01636030` |
| `0x024D1500` | `Select` | `0x01636480` |
| `0x024D1500` | `SetSelection` | `0x016364A0` |
| `0x024D1500` | `GetSelection` | `0x016364F0` |
| `0x024D1540` | `checked` | `0x016365D0` |
| `0x024D1540` | `maxlength` | `0x016366C0` |
| `0x024D1540` | `size` | `0x016367C0` |
| `0x024D1540` | `max` | `0x016368B0` |
| `0x024D1540` | `min` | `0x016369A0` |
| `0x024D1540` | `step` | `0x01636A90` |
| `0x024D15B0` | `checked` | `0x01636B80` |
| `0x024D15B0` | `maxlength` | `0x01636CE0` |
| `0x024D15B0` | `size` | `0x01636DE0` |
| `0x024D15B0` | `max` | `0x01636ED0` |
| `0x024D15B0` | `min` | `0x01636FD0` |
| `0x024D15B0` | `step` | `0x016370D0` |
| `0x024D1620` | `Add` | `0x016376B0` |
| `0x024D1620` | `Remove` | `0x01637860` |
| `0x024D1620` | `RemoveAll` | `0x016379B0` |
| `0x024D16B0` | `Select` | `0x01637F10` |
| `0x024D16B0` | `SetSelection` | `0x01637F30` |
| `0x024D16B0` | `GetSelection` | `0x01637F80` |
| `0x024D16F0` | `cols` | `0x01638060` |
| `0x024D16F0` | `maxlength` | `0x016380B0` |
| `0x024D16F0` | `rows` | `0x01638100` |
| `0x024D16F0` | `wordwrap` | `0x01638150` |
| `0x024D1740` | `cols` | `0x016381A0` |
| `0x024D1740` | `maxlength` | `0x01638200` |
| `0x024D1740` | `rows` | `0x01638260` |
| `0x024D1740` | `wordwrap` | `0x016382C0` |

---

## Small Info

**These RVAs are per-build.** Growtopia re-randomises layout on every update, so they must be re-derived each time - which is what this repo automates. Never hardcode them; re-read this file after each release.

I Wish they could fix bots bruh
