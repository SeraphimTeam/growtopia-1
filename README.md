# Growtopia offsets

**Latest Growtopia client**

| Version | Build Number | Updated (UTC) |
|---|---:|---|
| v5.55 | `521445145` | 2026-08-20 07:16:08 UTC |

**Image**

| | |
|---|---|
| image base | `0x140000000` |
| `.text` | `0x00001000-0x01EA6218` |
| SHA-256 | `a2a871afffa60ba9d665200e027ed15a55c69f935b44b1a05b2511f103ac32d7` |
| functions in `.pdata` | 79665 |
| generated | 2026-08-22 06:21:49Z |

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
| anticheat | `PunchHackDetector` | `0x00B7BA50` | 3167 | VERIFIED | `Punch hack detected!` |
| app | `GetApp` | `0x00A01B30` | 8 | CHECK | `mov rax,[rip];ret pattern` |
| app | `App_Kill` | `0x00A04FD0` | 454 | VERIFIED | `Don't call App::Kill() again.` |
| app | `GetClient` | `0x00A92DB0` | - | VERIFIED | `singleton accessor chain from GetApp` |
| app | `GetPacketProcessor` | `0x00BB51D0` | - | VERIFIED | `singleton accessor chain from GetApp` |
| app | `GetLocalAvatar` | `0x00BB53A0` | - | CHECK | `singleton accessor chain from GetApp` |
| camera | `CameraManager` | `0x00AAFA10` | 375 | VERIFIED | `warning: No camera was active` |
| combat | `PunchNoTileHandler` | `0x00A31790` | 72964 | VERIFIED | `a punch was sent with no tile!` |
| combat | `HarvestInteraction` | `0x00A9BF00` | 3894 | VERIFIED | `You can harvest it by punching!` |
| combat | `WeaponDamageTierText` | `0x00C91660` | 710 | VERIFIED | `Increases the damage of all Tier 1 Weapons.<CR> `210%``` |
| combat | `PunchAction` | `0x00E66180` | 6996 | VERIFIED | `Punch! + audio/punch_organic.wav` |
| combat | `OnDeathEquipTagHandler` | `0x01059020` | 8712 | VERIFIED | `OnDeath` |
| econ | `IAPPurchaseValidation` | `0x00DA4040` | 7344 | VERIFIED | `action\|houston_validation_done + currency\| + purchaseState\|` |
| econ | `StoreBuyPacketPath` | `0x00DF5FA0` | 8562 | VERIFIED | `OnStoreBuyConfirm` |
| economy | `IAPManager_LoadCurrenciesConfig` | `0x012231C0` | 1603 | VERIFIED | `IAPManager::LoadCurrenciesConfig() text.empty` |
| economy | `IAPManager_ctor` | `0x0122F2F0` | 510 | VERIFIED | `IAPManager::IAPManager() iapText.empty` |
| fx | `SpriteRenderParser` | `0x0095D070` | 344 | VERIFIED | `SpriteRender` |
| fx | `RTFont_GetColorFromString` | `0x00DE6ED0` | 117 | VERIFIED | `RTFont::GetColorFromString> Bad code` |
| fx | `ParticleEmitter_GetPaintballColor` | `0x00E97AC0` | 260 | VERIFIED | `ParticleEmitter::GetPaintballColor() un-defined color` |
| fx | `ParticleEmitterParser` | `0x00E97AC0` | 260 | VERIFIED | `Emitter` |
| fx | `AnimCurveKeyFrameParser` | `0x0108E970` | 1507 | VERIFIED | `KeyFrame` |
| fx | `AnimTimeParser` | `0x01090460` | 508 | VERIFIED | `animTime` |
| fx | `SpriteAnimStateParser` | `0x01095910` | 1419 | VERIFIED | `playOnState` |
| fx | `StateMachineTransitions` | `0x010BB990` | 2749 | VERIFIED | `Transitions` |
| fx | `RendererConditionParser` | `0x010BDC50` | 806 | VERIFIED | `Condition` |
| fx | `OnRenderHandler` | `0x012AE1F0` | 4477 | VERIFIED | `OnRender` |
| fx | `ResourceManager_GetSurfaceResource` | `0x012CF090` | 781 | VERIFIED | `ResourceManager::GetSurfaceResource: Unable to load %s` |
| gfx | `VideoModeManager_AddVideoMode` | `0x00E35F60` | 264 | VERIFIED | `VideoModeManager::AddVideoMode` |
| gfx | `VideoModeManager_GetCustomVideoModes` | `0x00E36520` | 436 | VERIFIED | `VideoModeManager::GetCustomVideoModes` |
| gfx | `VideoModeManager_SetFullscreen` | `0x00E38630` | 141 | VERIFIED | `VideoModeManager::SetFullscreenVideoMode` |
| gfx | `VideoModeManager_OnWMSize` | `0x00E38700` | 479 | VERIFIED | `VideoModeManager::OnWMSize` |
| gfx | `VideoModeManager_SetVideoMode` | `0x00E38D20` | 384 | VERIFIED | `VideoModeManager::SetVideoMode` |
| inventory | `ItemSurfaceRender` | `0x00AC4850` | 40035 | VERIFIED | `ERROR: Surface for item %d not loaded!` |
| inventory | `ItemHashCheck` | `0x00CB42C0` | 4293 | VERIFIED | `Warning: No hash found for item %d` |
| inventory | `PlayerItems_AddItem` | `0x00CCBB80` | 315 | VERIFIED | `PlayerItems::AddItem() nullptr == pItemInfo itemID=%d` |
| inventory | `PlayerItems_HaveRoomForItem` | `0x00CCCD10` | 214 | VERIFIED | `PlayerItems::HaveRoomForItem() can not be.` |
| inventory | `PlayerItems_RemoveItem` | `0x00CCE490` | 324 | VERIFIED | `Error, can't remove all %d items of type %d from inventory` |
| inventory | `InventoryIllegalItemPurge` | `0x00CCE5E0` | 1256 | VERIFIED | `[Removing Illegal Item] [Glitch] %d for player` |
| inventory | `ItemValidator` | `0x00CE23D0` | 1019 | VERIFIED | `Illegal item %d in %s` |
| inventory | `ItemsDatLoader` | `0x00CE2930` | 2065 | VERIFIED | `Bad itemID %d in %s, skipping` |
| inventory | `ChooseVisual` | `0x00D02E80` | 620 | VERIFIED | `ChooseVisual: ItemId not found: %d` |
| net | `ENetHostConnectSetup` | `0x00A92DD0` | 470 | VERIFIED | `No available peers for initiating an ENet connection.` |
| net | `PacketTypeDispatcher` | `0x00A931F0` | 1392 | VERIFIED | `Got unknown packet type: %d` |
| net | `GameUpdatePacketSerializer` | `0x00A95340` | 185 | VERIFIED | `GameUpdatePacket data: ` |
| net | `OnErrorFinishHandler` | `0x00AF2630` | 3511 | VERIFIED | `OnError` |
| net | `TileActionBuilder` | `0x00B7DDE0` | 2305 | VERIFIED | `tileY\|` |
| net | `OnDisconnectedHandler` | `0x00BC0B00` | 54 | VERIFIED | `OnDisconnected` |
| net | `ProcessTankUpdatePacket` | `0x00BCB030` | 17860 | VERIFIED | `Error reading function packet, ignoring` |
| net | `TrackPacketSender` | `0x00C00390` | 3880 | VERIFIED | `Bad Track Packet , eventName not defined` |
| net | `PacketLengthValidator` | `0x00CC3D10` | 41 | VERIFIED | `Bad packet length, ignoring message` |
| net | `SendPacket` | `0x00CC6C80` | 183 | VERIFIED | `Bad peer` |
| net | `SendPacketRaw` | `0x00CC6DA0` | 418 | VERIFIED | `Huge Packet Size %d` |
| net | `LoginPacketBuilder` | `0x00E4AC10` | 14277 | VERIFIED | `tankIDName\| + requestedName\| + rid\|` |
| net | `DialogButtonBuilder` | `0x0117BAD0` | 3790 | VERIFIED | `button\|` |
| net | `VariantListSerializeFromMem` | `0x013079C0` | 860 | VERIFIED | `unknown var type` |
| net | `AuthClient_Login` | `0x0173BEA0` | 6320 | VERIFIED | `AuthenticationClient::login with PlayerCredentials` |
| pets | `Scepter_RenderPet` | `0x0071F770` | 866 | VERIFIED | `ScepterOfTheHonorGuardLogics::RenderPet` |
| pets | `OwlsOfAthenaPets_OnRespawned` | `0x007E1AC0` | 146 | VERIFIED | `OwlsOfAthenaPetsLogics::OnRespawned` |
| pets | `OwlsOfAthenaPets_RenderPet` | `0x007F69B0` | 2339 | VERIFIED | `OwlsOfAthenaPetsLogics::RenderPet` |
| pets | `Flying2Pets_OnRespawned` | `0x009574B0` | 146 | VERIFIED | `Flying2PetsLogics::OnRespawned` |
| pets | `Flying2Pets_RenderPet` | `0x0096C8F0` | 1959 | VERIFIED | `Flying2PetsLogics::RenderPet` |
| pets | `BattlePetConfigLoader` | `0x00C4EC70` | 989 | VERIFIED | `Can't load BattlePet info config: %s, error: %s, offset: %d` |
| physics | `ItemRendererXmlLoader` | `0x01052C70` | 9899 | VERIFIED | `PhysicsBody %s wasn't loaded correct.` |
| player | `FactionIconLoader` | `0x00B71590` | 13239 | VERIFIED | `Error loading Faction icons` |
| player | `NetAvatar_OnAvatarBePaintBalled` | `0x00B76F50` | 582 | VERIFIED | `NetAvatar::OnAvatarBePaintBalled sourceNetID is invalid=%d` |
| player | `NetAvatarNetIDEmitter` | `0x00BC3310` | 248 | VERIFIED | `netID\|` |
| player | `NetAvatarSpawnHandler` | `0x00BC5E90` | 3665 | VERIFIED | `netID\| + mstate\| + smstate\|` |
| player | `PlayerProgression` | `0x01726B70` | 1056 | VERIFIED | `player.progression.%s` |
| trade | `TradeOtherPlayerGuard` | `0x00E08820` | 4432 | VERIFIED | `other player doesn't exist!` |
| trade | `TradeHandler` | `0x00E09F60` | 2294 | VERIFIED | `CancelTrade` |
| ui | `Controller_Release` | `0x00A06020` | 489 | VERIFIED | `Controller::Release` |
| ui | `ItemEffectVariantDispatcher` | `0x00B8B900` | 11776 | VERIFIED | `OnBalloonBunnyUpdate` |
| ui | `OnVariantDispatcher` | `0x00BBA490` | 21440 | VERIFIED | `OnZoomCamera + OnPinchMod + OnActivateMenusRequest + OnStoreRequest` |
| ui | `TextOverlayActionHandler` | `0x00BC79A0` | 3712 | VERIFIED | `audioFile\|` |
| ui | `GrowtorialButton` | `0x00D42B80` | 4370 | VERIFIED | `Error with add_commnty_growtorial_bttn parms` |
| ui | `OnButtonSelectedHandler` | `0x00D5DAA0` | 7045 | VERIFIED | `OnButtonSelected` |
| ui | `DialogBuilder` | `0x00D7E230` | 30966 | VERIFIED | `Error with add_searchable_item_list parms` |
| ui | `CaptchaInputDialog` | `0x00D8D680` | 7496 | VERIFIED | `\|CaptchaID\|` |
| ui | `BannerDialogBuilder` | `0x00DF9D30` | 12770 | VERIFIED | `Error with add_banner parms` |
| ui | `Controller_PopController` | `0x00E0F5E0` | 544 | VERIFIED | `Controller::PopController` |
| ui | `Controller_PushController` | `0x00E0F800` | 721 | VERIFIED | `Controller::PushController` |
| ui | `Controller_Deactivate` | `0x00E48680` | 638 | VERIFIED | `Controller::Deactivate` |
| ui | `Controller_OnActivate` | `0x00E48A40` | 475 | VERIFIED | `Controller::OnActivate` |
| ui | `OnEventHandler` | `0x010F2E10` | 3202 | VERIFIED | `OnEvent` |
| ui | `Controller_PushChildController` | `0x011183E0` | 690 | VERIFIED | `Controller::PushChildController` |
| ui | `InventoryTabUI` | `0x0113B540` | 3392 | VERIFIED | `tabclothes\|` |
| ui | `UIController_OnActivate` | `0x0116D180` | 1512 | VERIFIED | `UIController::OnActivate` |
| ui | `UIController_OnDeactivate` | `0x0116D770` | 622 | VERIFIED | `UIController::OnDeactivate` |
| ui | `UIController_RemoveScreenView` | `0x0116D9F0` | 1139 | VERIFIED | `UIController::RemoveScreenView` |
| ui | `OnOverMoveHandler` | `0x0123A020` | 5273 | VERIFIED | `OnOverMove` |
| ui | `EnableAllButtonsEntity` | `0x0125D8F0` | 1526 | VERIFIED | `EnableAllButtonsEntity() nullptr == pEnt` |
| ui | `LogDisplayEntityBuilder` | `0x012614E0` | 2351 | VERIFIED | `LogDisplayEntity` |
| ui | `OnFakeScrollToEntity` | `0x012A0220` | 4626 | VERIFIED | `OnFakeScrollToEntity` |
| ui | `OnDeleteHandler` | `0x01791F20` | 1273 | VERIFIED | `OnDelete` |
| world | `TileCoordinateHandler` | `0x00A2FD40` | 228 | VERIFIED | `tileX == %d, tileY == %d` |
| world | `TileLookupGuard` | `0x00A47150` | 1184 | VERIFIED | `Error, no tile` |
| world | `TilesheetLoader` | `0x00AB35C0` | 832 | VERIFIED | `Error, tile(%d) haven't texture file` |
| world | `WorldLockText` | `0x00B82CF0` | 13171 | VERIFIED | ` per World Lock` |
| world | `WorldVersionCheck` | `0x00BCB030` | 17860 | VERIFIED | `ERROR: Wrong world version: %d, dataSize %d` |
| world | `WeatherEffectText` | `0x00C88DB0` | 3273 | VERIFIED | `Replaces any other active Weather Effect.` |
| world | `TileDefinitionsLoader` | `0x00CAF830` | 15673 | VERIFIED | `Please wait, loading tile definitions...` |
| world | `BgItemMapValidator` | `0x00CE3170` | 435 | VERIFIED | `Removing illegal bg item %d from map %s` |
| world | `TileExtraParser` | `0x00CF4280` | 23652 | VERIFIED | `Bad type of %d detected in tileextra. WorldName: %s` |
| world | `WorldTileMap` | `0x00D0A720` | 1204 | VERIFIED | `WorldTileMap: size: %d, %d; count: %d` |
| world | `SeedTreeItemPath` | `0x00D6E0A0` | 11101 | VERIFIED | `itemIDseed2tree_itemAmount` |
| world | `TilesheetPageLoader` | `0x00D8FA30` | 1057 | VERIFIED | `Error loading tiles_page2.rttex` |
| world | `WorldValidation` | `0x01183170` | 616 | VERIFIED | `Validing World Now %s` |
| world | `WhiteDoorLookup` | `0x014D9A90` | 754 | VERIFIED | `White door missing from map %s` |
| world | `World_Load` | `0x014DA290` | 1095 | VERIFIED | `World::Load: Version %d. f: %d, Name: %s` |

---

## Part 2 - Script-binding metadata (RmlUi + Lua)

The only true `{name -> address}` metadata in the binary: 16-byte `{const char* name, void* fn}` rows. Every row below has a function pointer landing exactly on a `.pdata` function start.

> Property tables store **bare** names (`attributes`, `x`) - the `get_`/`set_` spelling seen in write-ups is an annotation, not shipped data. Names are unique per table, not globally: `x` belongs to both `Vector2f` and `Vector2i`.

| Table | Method | Offset (RVA) |
| ----- | ------ | ------------ |
| `0x0201FFE0` | `_G` | `0x016614A0` |
| `0x0201FFE0` | `package` | `0x0166C860` |
| `0x0201FFE0` | `coroutine` | `0x01661B10` |
| `0x0201FFE0` | `table` | `0x01662A80` |
| `0x0201FFE0` | `io` | `0x01664290` |
| `0x0201FFE0` | `os` | `0x01664E80` |
| `0x0201FFE0` | `string` | `0x01668E00` |
| `0x0201FFE0` | `math` | `0x0166A5C0` |
| `0x0201FFE0` | `utf8` | `0x01669760` |
| `0x0201FFE0` | `debug` | `0x0166BA00` |
| `0x02020C80` | `assert` | `0x01660430` |
| `0x02020C80` | `collectgarbage` | `0x01660DE0` |
| `0x02020C80` | `dofile` | `0x016603A0` |
| `0x02020C80` | `error` | `0x01660AF0` |
| `0x02020C80` | `getmetatable` | `0x01660B70` |
| `0x02020C80` | `ipairs` | `0x01661160` |
| `0x02020C80` | `loadfile` | `0x016611B0` |
| `0x02020C80` | `load` | `0x016602A0` |
| `0x02020C80` | `next` | `0x01661060` |
| `0x02020C80` | `pairs` | `0x016610C0` |
| `0x02020C80` | `pcall` | `0x016605D0` |
| `0x02020C80` | `print` | `0x01660760` |
| `0x02020C80` | `warn` | `0x01660850` |
| `0x02020C80` | `rawequal` | `0x01660C80` |
| `0x02020C80` | `rawlen` | `0x01660CD0` |
| `0x02020C80` | `rawget` | `0x01660D30` |
| `0x02020C80` | `rawset` | `0x01660D80` |
| `0x02020C80` | `select` | `0x01660510` |
| `0x02020C80` | `setmetatable` | `0x01660BD0` |
| `0x02020C80` | `tonumber` | `0x01660900` |
| `0x02020C80` | `tostring` | `0x01660730` |
| `0x02020C80` | `type` | `0x01661000` |
| `0x02020C80` | `xpcall` | `0x01660670` |
| `0x020210B0` | `create` | `0x016615D0` |
| `0x020210B0` | `resume` | `0x01661520` |
| `0x020210B0` | `running` | `0x016617B0` |
| `0x020210B0` | `status` | `0x016616D0` |
| `0x020210B0` | `wrap` | `0x01661630` |
| `0x020210B0` | `yield` | `0x016616A0` |
| `0x020210B0` | `isyieldable` | `0x01661740` |
| `0x020210B0` | `close` | `0x016617E0` |
| `0x020212B0` | `concat` | `0x016620C0` |
| `0x020212B0` | `insert` | `0x01661B60` |
| `0x020212B0` | `pack` | `0x016622F0` |
| `0x020212B0` | `unpack` | `0x016623A0` |
| `0x020212B0` | `remove` | `0x01661CF0` |
| `0x020212B0` | `move` | `0x01661E70` |
| `0x020212B0` | `sort` | `0x01662490` |
| `0x02021440` | `close` | `0x01663320` |
| `0x02021440` | `flush` | `0x016630D0` |
| `0x02021440` | `input` | `0x01662AD0` |
| `0x02021440` | `lines` | `0x01662C40` |
| `0x02021440` | `open` | `0x01663410` |
| `0x02021440` | `output` | `0x01662B60` |
| `0x02021440` | `popen` | `0x01663550` |
| `0x02021440` | `read` | `0x01662D60` |
| `0x02021440` | `tmpfile` | `0x01663630` |
| `0x02021440` | `type` | `0x016631E0` |
| `0x02021440` | `write` | `0x01662E30` |
| `0x02021500` | `read` | `0x01662DD0` |
| `0x02021500` | `write` | `0x01662EA0` |
| `0x02021500` | `lines` | `0x01662BF0` |
| `0x02021500` | `flush` | `0x01663160` |
| `0x02021500` | `seek` | `0x01662F10` |
| `0x02021500` | `close` | `0x016632B0` |
| `0x02021500` | `setvbuf` | `0x01663000` |
| `0x02021590` | `__gc` | `0x016633B0` |
| `0x02021590` | `__close` | `0x016633B0` |
| `0x02021590` | `__tostring` | `0x01663250` |
| `0x02021900` | `clock` | `0x01664BF0` |
| `0x02021900` | `date` | `0x016644A0` |
| `0x02021900` | `difftime` | `0x016648B0` |
| `0x02021900` | `execute` | `0x016649F0` |
| `0x02021900` | `exit` | `0x01664970` |
| `0x02021900` | `getenv` | `0x01664BB0` |
| `0x02021900` | `remove` | `0x01664A60` |
| `0x02021900` | `rename` | `0x01664AC0` |
| `0x02021900` | `setlocale` | `0x01664900` |
| `0x02021900` | `time` | `0x01664720` |
| `0x02021900` | `tmpname` | `0x01664B40` |
| `0x02021B90` | `byte` | `0x016653A0` |
| `0x02021B90` | `char` | `0x016654C0` |
| `0x02021B90` | `dump` | `0x016655A0` |
| `0x02021BD0` | `format` | `0x01665AD0` |
| `0x02021BD0` | `gmatch` | `0x01665770` |
| `0x02021BD0` | `gsub` | `0x01665880` |
| `0x02021BD0` | `len` | `0x01664ED0` |
| `0x02021BD0` | `lower` | `0x01665090` |
| `0x02021C30` | `rep` | `0x01665210` |
| `0x02021C30` | `reverse` | `0x01664FF0` |
| `0x02021C30` | `sub` | `0x01664F00` |
| `0x02021C30` | `upper` | `0x01665150` |
| `0x02021C30` | `pack` | `0x01666310` |
| `0x02021C30` | `packsize` | `0x016669E0` |
| `0x02021C30` | `unpack` | `0x01666B80` |
| `0x02022280` | `offset` | `0x01669370` |
| `0x02022280` | `codepoint` | `0x01669040` |
| `0x02022280` | `char` | `0x01669250` |
| `0x02022280` | `len` | `0x01668ED0` |
| `0x02022280` | `codes` | `0x016694F0` |
| `0x020223A0` | `abs` | `0x016697E0` |
| `0x020223A0` | `acos` | `0x01669910` |
| `0x020223A0` | `asin` | `0x016698E0` |
| `0x020223A0` | `atan` | `0x01669940` |
| `0x020223A0` | `ceil` | `0x01669A80` |
| `0x020223A0` | `cos` | `0x01669880` |
| `0x020223A0` | `deg` | `0x01669E50` |
| `0x020223A0` | `exp` | `0x01669E20` |
| `0x020223A0` | `tointeger` | `0x016699A0` |
| `0x020223A0` | `floor` | `0x01669A00` |
| `0x020223A0` | `fmod` | `0x01669B00` |
| `0x020223A0` | `ult` | `0x01669D10` |
| `0x020223A0` | `log` | `0x01669D60` |
| `0x020223A0` | `max` | `0x01669F70` |
| `0x020223A0` | `min` | `0x01669ED0` |
| `0x020223A0` | `modf` | `0x01669C00` |
| `0x020223A0` | `rad` | `0x01669E90` |
| `0x020223A0` | `sin` | `0x01669850` |
| `0x020223A0` | `sqrt` | `0x01669CD0` |
| `0x020223A0` | `tan` | `0x016698B0` |
| `0x020223A0` | `type` | `0x0166A010` |
| `0x02022620` | `debug` | `0x0166B660` |
| `0x02022620` | `getuservalue` | `0x0166A7C0` |
| `0x02022620` | `gethook` | `0x0166B4E0` |
| `0x02022620` | `getinfo` | `0x0166A8C0` |
| `0x02022620` | `getlocal` | `0x0166AD50` |
| `0x02022620` | `getregistry` | `0x0166A700` |
| `0x02022620` | `getmetatable` | `0x0166A720` |
| `0x02022620` | `getupvalue` | `0x0166B040` |
| `0x02022620` | `upvaluejoin` | `0x0166B1D0` |
| `0x02022620` | `upvalueid` | `0x0166B150` |
| `0x02022620` | `setuservalue` | `0x0166A840` |
| `0x02022620` | `sethook` | `0x0166B2F0` |
| `0x02022620` | `setlocal` | `0x0166AED0` |
| `0x02022620` | `setmetatable` | `0x0166A760` |
| `0x02022620` | `setupvalue` | `0x0166B0C0` |
| `0x02022620` | `traceback` | `0x0166B850` |
| `0x02022620` | `setcstacklimit` | `0x0166B920` |
| `0x024E19E0` | `CreateContext` | `0x01634C20` |
| `0x024E19E0` | `LoadFontFace` | `0x01634D40` |
| `0x024E19E0` | `RegisterTag` | `0x01634E80` |
| `0x024E1A20` | `contexts` | `0x01634F80` |
| `0x024E1A20` | `key_identifier` | `0x01634FC0` |
| `0x024E1A20` | `key_modifier` | `0x01635000` |
| `0x024E1A60` | `red` | `0x01636D10` |
| `0x024E1A60` | `green` | `0x01636D60` |
| `0x024E1A60` | `blue` | `0x01636DB0` |
| `0x024E1A60` | `alpha` | `0x01636E00` |
| `0x024E1A60` | `rgba` | `0x01636E50` |
| `0x024E1AC0` | `red` | `0x01636ED0` |
| `0x024E1AC0` | `green` | `0x01636F30` |
| `0x024E1AC0` | `blue` | `0x01636F90` |
| `0x024E1AC0` | `alpha` | `0x01636FF0` |
| `0x024E1AC0` | `rgba` | `0x01637050` |
| `0x024E1B20` | `red` | `0x01637720` |
| `0x024E1B20` | `green` | `0x01637770` |
| `0x024E1B20` | `blue` | `0x016377C0` |
| `0x024E1B20` | `alpha` | `0x01637810` |
| `0x024E1B20` | `rgba` | `0x01637860` |
| `0x024E1B80` | `red` | `0x016378F0` |
| `0x024E1B80` | `green` | `0x01637960` |
| `0x024E1B80` | `blue` | `0x016379D0` |
| `0x024E1B80` | `alpha` | `0x01637A40` |
| `0x024E1B80` | `rgba` | `0x01637AB0` |
| `0x024E1BE0` | `AddEventListener` | `0x01638400` |
| `0x024E1BE0` | `CreateDocument` | `0x01638910` |
| `0x024E1BE0` | `LoadDocument` | `0x01638A20` |
| `0x024E1BE0` | `Render` | `0x01638B10` |
| `0x024E1BE0` | `UnloadAllDocuments` | `0x01638B40` |
| `0x024E1BE0` | `UnloadDocument` | `0x01638B60` |
| `0x024E1BE0` | `Update` | `0x01638BA0` |
| `0x024E1BE0` | `OpenDataModel` | `0x01637FB0` |
| `0x024E1BE0` | `ProcessMouseMove` | `0x01637FF0` |
| `0x024E1BE0` | `ProcessMouseButtonDown` | `0x01638070` |
| `0x024E1BE0` | `ProcessMouseButtonUp` | `0x016380D0` |
| `0x024E1BE0` | `ProcessMouseWheel` | `0x01638130` |
| `0x024E1BE0` | `ProcessMouseLeave` | `0x016381A0` |
| `0x024E1BE0` | `IsMouseInteracting` | `0x016381D0` |
| `0x024E1BE0` | `ProcessKeyDown` | `0x01638200` |
| `0x024E1BE0` | `ProcessKeyUp` | `0x01638260` |
| `0x024E1BE0` | `ProcessTextInput` | `0x016382C0` |
| `0x024E1D00` | `dimensions` | `0x01638BD0` |
| `0x024E1D00` | `documents` | `0x01638C40` |
| `0x024E1D00` | `dp_ratio` | `0x01638CB0` |
| `0x024E1D00` | `focus_element` | `0x01638CF0` |
| `0x024E1D00` | `hover_element` | `0x01638D50` |
| `0x024E1D00` | `name` | `0x01638DB0` |
| `0x024E1D00` | `root_element` | `0x01638E10` |
| `0x024E1DD0` | `PullToFront` | `0x01639AE0` |
| `0x024E1DD0` | `PushToBack` | `0x01639B00` |
| `0x024E1DD0` | `Show` | `0x01639B20` |
| `0x024E1DD0` | `Hide` | `0x01639BA0` |
| `0x024E1DD0` | `Close` | `0x01639BC0` |
| `0x024E1DD0` | `CreateElement` | `0x01639BE0` |
| `0x024E1DD0` | `CreateTextNode` | `0x01639D50` |
| `0x024E1EA0` | `AddEventListener` | `0x0163A730` |
| `0x024E1EA0` | `AppendChild` | `0x0163A990` |
| `0x024E1EA0` | `Blur` | `0x0163AA90` |
| `0x024E1EA0` | `Click` | `0x0163AAB0` |
| `0x024E1EA0` | `DispatchEvent` | `0x0163AAD0` |
| `0x024E1EA0` | `Focus` | `0x0163B020` |
| `0x024E1EA0` | `GetAttribute` | `0x0163B040` |
| `0x024E1EA0` | `GetElementById` | `0x0163B130` |
| `0x024E1EA0` | `GetElementsByTagName` | `0x0163B220` |
| `0x024E1EA0` | `QuerySelector` | `0x0163B530` |
| `0x024E1EA0` | `QuerySelectorAll` | `0x0163B620` |
| `0x024E1EA0` | `Matches` | `0x0163B930` |
| `0x024E1EA0` | `HasAttribute` | `0x0163BA00` |
| `0x024E1EA0` | `HasChildNodes` | `0x0163BAD0` |
| `0x024E1EA0` | `InsertBefore` | `0x0163BB00` |
| `0x024E1EA0` | `IsClassSet` | `0x0163BC20` |
| `0x024E1EA0` | `RemoveAttribute` | `0x0163BCF0` |
| `0x024E1EA0` | `RemoveChild` | `0x0163BDB0` |
| `0x024E1EA0` | `ReplaceChild` | `0x0163BE20` |
| `0x024E1EA0` | `ScrollIntoView` | `0x0163BF50` |
| `0x024E1EA0` | `SetAttribute` | `0x0163BF80` |
| `0x024E1EA0` | `SetClass` | `0x0163C0F0` |
| `0x024E2010` | `attributes` | `0x0163C1E0` |
| `0x024E2010` | `child_nodes` | `0x0163C250` |
| `0x024E2010` | `class_name` | `0x0163C2C0` |
| `0x024E2010` | `client_left` | `0x0163C380` |
| `0x024E2010` | `client_height` | `0x0163C3E0` |
| `0x024E2010` | `client_top` | `0x0163C440` |
| `0x024E2010` | `client_width` | `0x0163C4A0` |
| `0x024E2010` | `first_child` | `0x0163C500` |
| `0x024E2010` | `id` | `0x0163C560` |
| `0x024E2010` | `inner_rml` | `0x0163C5C0` |
| `0x024E2010` | `last_child` | `0x0163C670` |
| `0x024E2010` | `next_sibling` | `0x0163C6D0` |
| `0x024E2010` | `offset_height` | `0x0163C730` |
| `0x024E2010` | `offset_left` | `0x0163C790` |
| `0x024E2010` | `offset_parent` | `0x0163C7F0` |
| `0x024E2010` | `offset_top` | `0x0163C850` |
| `0x024E2010` | `offset_width` | `0x0163C8B0` |
| `0x024E2010` | `owner_document` | `0x0163C910` |
| `0x024E2010` | `parent_node` | `0x0163C970` |
| `0x024E2010` | `previous_sibling` | `0x0163C9D0` |
| `0x024E2010` | `scroll_height` | `0x0163CA30` |
| `0x024E2010` | `scroll_left` | `0x0163CA90` |
| `0x024E2010` | `scroll_top` | `0x0163CAF0` |
| `0x024E2010` | `scroll_width` | `0x0163CB50` |
| `0x024E2010` | `style` | `0x0163CBB0` |
| `0x024E2010` | `tag_name` | `0x0163CC20` |
| `0x024E21C0` | `class_name` | `0x0163CC80` |
| `0x024E21C0` | `id` | `0x0163CD70` |
| `0x024E21C0` | `inner_rml` | `0x0163CE60` |
| `0x024E21C0` | `scroll_left` | `0x0163CF60` |
| `0x024E21C0` | `scroll_top` | `0x0163CFD0` |
| `0x024E22F0` | `current_element` | `0x0163EF80` |
| `0x024E22F0` | `type` | `0x0163EFE0` |
| `0x024E22F0` | `target_element` | `0x0163F1C0` |
| `0x024E22F0` | `parameters` | `0x0163F220` |
| `0x024E2340` | `DotProduct` | `0x0163FFB0` |
| `0x024E2340` | `Normalise` | `0x01640020` |
| `0x024E2340` | `Rotate` | `0x016400D0` |
| `0x024E2380` | `x` | `0x016401A0` |
| `0x024E2380` | `y` | `0x016401F0` |
| `0x024E2380` | `magnitude` | `0x01640240` |
| `0x024E23F0` | `x` | `0x01640AA0` |
| `0x024E23F0` | `y` | `0x01640AF0` |
| `0x024E23F0` | `magnitude` | `0x01640B40` |
| `0x024E2480` | `disabled` | `0x01641670` |
| `0x024E2480` | `name` | `0x016416C0` |
| `0x024E2480` | `value` | `0x01641770` |
| `0x024E24C0` | `disabled` | `0x01641830` |
| `0x024E24C0` | `name` | `0x016418A0` |
| `0x024E24C0` | `value` | `0x01641990` |
| `0x024E2500` | `Select` | `0x01641DE0` |
| `0x024E2500` | `SetSelection` | `0x01641E00` |
| `0x024E2500` | `GetSelection` | `0x01641E50` |
| `0x024E2540` | `checked` | `0x01641F30` |
| `0x024E2540` | `maxlength` | `0x01642020` |
| `0x024E2540` | `size` | `0x01642120` |
| `0x024E2540` | `max` | `0x01642210` |
| `0x024E2540` | `min` | `0x01642300` |
| `0x024E2540` | `step` | `0x016423F0` |
| `0x024E25B0` | `checked` | `0x016424E0` |
| `0x024E25B0` | `maxlength` | `0x01642640` |
| `0x024E25B0` | `size` | `0x01642740` |
| `0x024E25B0` | `max` | `0x01642830` |
| `0x024E25B0` | `min` | `0x01642930` |
| `0x024E25B0` | `step` | `0x01642A30` |
| `0x024E2620` | `Add` | `0x01643010` |
| `0x024E2620` | `Remove` | `0x016431C0` |
| `0x024E2620` | `RemoveAll` | `0x01643310` |
| `0x024E26B0` | `Select` | `0x01643870` |
| `0x024E26B0` | `SetSelection` | `0x01643890` |
| `0x024E26B0` | `GetSelection` | `0x016438E0` |
| `0x024E26F0` | `cols` | `0x016439C0` |
| `0x024E26F0` | `maxlength` | `0x01643A10` |
| `0x024E26F0` | `rows` | `0x01643A60` |
| `0x024E26F0` | `wordwrap` | `0x01643AB0` |
| `0x024E2740` | `cols` | `0x01643B00` |
| `0x024E2740` | `maxlength` | `0x01643B60` |
| `0x024E2740` | `rows` | `0x01643BC0` |
| `0x024E2740` | `wordwrap` | `0x01643C20` |

---

## Small Info

**These RVAs are per-build.** Growtopia re-randomises layout on every update, so they must be re-derived each time - which is what this repo automates. Never hardcode them; re-read this file after each release.

I Wish they could fix bots bruh
