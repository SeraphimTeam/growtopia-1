# Growtopia offsets

**Latest Growtopia client**

| Version | Build Number | Updated (UTC) |
|---|---:|---|
| v5.60 | `01510264` | 2026-10-15 09:54:05 UTC |

**Image**

| | |
|---|---|
| image base | `0x140000000` |
| `.text` | `0x00001000-0x01C26800` |
| SHA-256 | `747070c82baaa67e01584c436a0539714064b4fbf42fdc40325ce67b09d4f5b5` |
| functions in `.pdata` | 73963 |
| generated | 2026-10-26 11:48:32Z |

| Status | Count | Meaning |
| ------ | ----: | ------- |
| VERIFIED | 400 | Address is a `.pdata` function start in the executable `.text` segment |
| CHECK | 2 | Resolved but did not satisfy every check |
| UNRESOLVED | 4 | No single owner found for the anchor |

**Total functions/methods documented:** `402`

---

## Part 1 - Engine & gameplay functions (anchor-string resolution)

| Category | Function | Offset (RVA) | Size | Status | Anchor string / evidence |
| -------- | -------- | ------------ | ---: | ------ | ------------------------ |
| anticheat | `PunchHackDetector` | `0x00AE7ED0` | 3334 | VERIFIED | `Punch hack detected!` |
| app | `GetApp` | `0x009798F0` | 8 | CHECK | `mov rax,[rip];ret pattern` |
| app | `App_Kill` | `0x0097CCF0` | 596 | VERIFIED | `Don't call App::Kill() again.` |
| app | `GetClient` | `0x00A0A2F0` | - | VERIFIED | `singleton accessor chain from GetApp` |
| app | `GetPacketProcessor` | `0x00B24090` | - | VERIFIED | `singleton accessor chain from GetApp` |
| app | `GetLocalAvatar` | `0x00B243F0` | - | CHECK | `singleton accessor chain from GetApp` |
| camera | `CameraManager` | `0x00A27250` | 375 | VERIFIED | `warning: No camera was active` |
| combat | `PunchNoTileHandler` | `0x009A8750` | 72964 | VERIFIED | `a punch was sent with no tile!` |
| combat | `HarvestInteraction` | `0x00A13420` | 3894 | VERIFIED | `You can harvest it by punching!` |
| combat | `WeaponDamageTierText` | `0x00C09D00` | 710 | VERIFIED | `Increases the damage of all Tier 1 Weapons.<CR> `210%``` |
| combat | `PunchAction` | `0x00DE29B0` | 6996 | VERIFIED | `Punch! + audio/punch_organic.wav` |
| combat | `OnDeathEquipTagHandler` | `0x00FCF640` | 8898 | VERIFIED | `OnDeath` |
| econ | `IAPPurchaseValidation` | `0x00D1E060` | 7344 | VERIFIED | `action\|houston_validation_done + currency\| + purchaseState\|` |
| econ | `StoreBuyPacketPath` | `0x00D71090` | 9274 | VERIFIED | `OnStoreBuyConfirm` |
| economy | `IAPManager_LoadCurrenciesConfig` | `0x0119BEA0` | 1603 | VERIFIED | `IAPManager::LoadCurrenciesConfig() text.empty` |
| economy | `IAPManager_ctor` | `0x011A81C0` | 510 | VERIFIED | `IAPManager::IAPManager() iapText.empty` |
| fx | `SpriteRenderParser` | `0x008D5720` | 344 | VERIFIED | `SpriteRender` |
| fx | `RTFont_GetColorFromString` | `0x00D62B80` | 117 | VERIFIED | `RTFont::GetColorFromString> Bad code` |
| fx | `ParticleEmitter_GetPaintballColor` | `0x00E144A0` | 260 | VERIFIED | `ParticleEmitter::GetPaintballColor() un-defined color` |
| fx | `ParticleEmitterParser` | `0x00E144A0` | 260 | VERIFIED | `Emitter` |
| fx | `AnimCurveKeyFrameParser` | `0x01004EF0` | 1507 | VERIFIED | `KeyFrame` |
| fx | `AnimTimeParser` | `0x010069E0` | 508 | VERIFIED | `animTime` |
| fx | `SpriteAnimStateParser` | `0x0100BE90` | 1419 | VERIFIED | `playOnState` |
| fx | `StateMachineTransitions` | `0x01028F70` | 3532 | VERIFIED | `Transitions` |
| fx | `RendererConditionParser` | `0x0102B3B0` | 809 | VERIFIED | `Condition` |
| fx | `OnRenderHandler` | `0x012235F0` | 4477 | VERIFIED | `OnRender` |
| fx | `ResourceManager_GetSurfaceResource` | `0x01244490` | 781 | VERIFIED | `ResourceManager::GetSurfaceResource: Unable to load %s` |
| gfx | `VideoModeManager_AddVideoMode` | `0x00DB19B0` | 264 | VERIFIED | `VideoModeManager::AddVideoMode` |
| gfx | `VideoModeManager_GetCustomVideoModes` | `0x00DB1F70` | 436 | VERIFIED | `VideoModeManager::GetCustomVideoModes` |
| gfx | `VideoModeManager_SetFullscreen` | `0x00DB4080` | 141 | VERIFIED | `VideoModeManager::SetFullscreenVideoMode` |
| gfx | `VideoModeManager_OnWMSize` | `0x00DB4150` | 479 | VERIFIED | `VideoModeManager::OnWMSize` |
| gfx | `VideoModeManager_SetVideoMode` | `0x00DB4770` | 384 | VERIFIED | `VideoModeManager::SetVideoMode` |
| inventory | `ItemSurfaceRender` | `0x00A3BBE0` | 40035 | VERIFIED | `ERROR: Surface for item %d not loaded!` |
| inventory | `ItemHashCheck` | `0x00C2CE90` | 4293 | VERIFIED | `Warning: No hash found for item %d` |
| inventory | `PlayerItems_AddItem` | `0x00C44840` | 315 | VERIFIED | `PlayerItems::AddItem() nullptr == pItemInfo itemID=%d` |
| inventory | `PlayerItems_HaveRoomForItem` | `0x00C459D0` | 214 | VERIFIED | `PlayerItems::HaveRoomForItem() can not be.` |
| inventory | `PlayerItems_RemoveItem` | `0x00C47150` | 324 | VERIFIED | `Error, can't remove all %d items of type %d from inventory` |
| inventory | `InventoryIllegalItemPurge` | `0x00C472A0` | 1256 | VERIFIED | `[Removing Illegal Item] [Glitch] %d for player` |
| inventory | `ItemValidator` | `0x00C5B200` | 1019 | VERIFIED | `Illegal item %d in %s` |
| inventory | `ItemsDatLoader` | `0x00C5B760` | 2065 | VERIFIED | `Bad itemID %d in %s, skipping` |
| inventory | `ChooseVisual` | `0x00C7BBC0` | 620 | VERIFIED | `ChooseVisual: ItemId not found: %d` |
| net | `ENetHostConnectSetup` | `0x00A0A310` | 470 | VERIFIED | `No available peers for initiating an ENet connection.` |
| net | `PacketTypeDispatcher` | `0x00A0A730` | 1360 | VERIFIED | `Got unknown packet type: %d` |
| net | `GameUpdatePacketSerializer` | `0x00A0C860` | 185 | VERIFIED | `GameUpdatePacket data: ` |
| net | `OnErrorFinishHandler` | `0x00A69930` | 3511 | VERIFIED | `OnError` |
| net | `TileActionBuilder` | `0x00AEA340` | 2289 | VERIFIED | `tileY\|` |
| net | `OnDisconnectedHandler` | `0x00B2FB50` | 54 | VERIFIED | `OnDisconnected` |
| net | `ProcessTankUpdatePacket` | `0x00B3A380` | 17672 | VERIFIED | `Error reading function packet, ignoring` |
| net | `TrackPacketSender` | `0x00B6F930` | 3880 | VERIFIED | `Bad Track Packet , eventName not defined` |
| net | `PacketLengthValidator` | `0x00C3C970` | 41 | VERIFIED | `Bad packet length, ignoring message` |
| net | `SendPacket` | `0x00C3F8E0` | 183 | VERIFIED | `Bad peer` |
| net | `SendPacketRaw` | `0x00C3FA00` | 418 | VERIFIED | `Huge Packet Size %d` |
| net | `LoginPacketBuilder` | `0x00DC7660` | 14277 | VERIFIED | `tankIDName\| + requestedName\| + rid\|` |
| net | `DialogButtonBuilder` | `0x010E6940` | 3790 | VERIFIED | `button\|` |
| net | `VariantListSerializeFromMem` | `0x0127D3E0` | 892 | VERIFIED | `unknown var type` |
| pets | `Scepter_RenderPet` | `0x00697650` | 866 | VERIFIED | `ScepterOfTheHonorGuardLogics::RenderPet` |
| pets | `OwlsOfAthenaPets_OnRespawned` | `0x0075A120` | 146 | VERIFIED | `OwlsOfAthenaPetsLogics::OnRespawned` |
| pets | `OwlsOfAthenaPets_RenderPet` | `0x0076F030` | 2339 | VERIFIED | `OwlsOfAthenaPetsLogics::RenderPet` |
| pets | `Flying2Pets_OnRespawned` | `0x008CFB60` | 146 | VERIFIED | `Flying2PetsLogics::OnRespawned` |
| pets | `Flying2Pets_RenderPet` | `0x008E4F50` | 1959 | VERIFIED | `Flying2PetsLogics::RenderPet` |
| pets | `BattlePetConfigLoader` | `0x00BC73C0` | 989 | VERIFIED | `Can't load BattlePet info config: %s, error: %s, offset: %d` |
| physics | `ItemRendererXmlLoader` | `0x00FC8CD0` | 11502 | VERIFIED | `PhysicsBody %s wasn't loaded correct.` |
| player | `FactionIconLoader` | `0x00ADD9D0` | 13239 | VERIFIED | `Error loading Faction icons` |
| player | `NetAvatar_OnAvatarBePaintBalled` | `0x00AE33D0` | 582 | VERIFIED | `NetAvatar::OnAvatarBePaintBalled sourceNetID is invalid=%d` |
| player | `NetAvatarNetIDEmitter` | `0x00B32360` | 248 | VERIFIED | `netID\|` |
| player | `NetAvatarSpawnHandler` | `0x00B352D0` | 3665 | VERIFIED | `netID\| + mstate\| + smstate\|` |
| trade | `TradeOtherPlayerGuard` | `0x00D82F00` | 4432 | VERIFIED | `other player doesn't exist!` |
| trade | `TradeHandler` | `0x00D84640` | 2294 | VERIFIED | `CancelTrade` |
| ui | `Controller_Release` | `0x0097DDB0` | 489 | VERIFIED | `Controller::Release` |
| ui | `ItemEffectVariantDispatcher` | `0x00AF9CD0` | 11776 | VERIFIED | `OnBalloonBunnyUpdate` |
| ui | `OnVariantDispatcher` | `0x00B294E0` | 21440 | VERIFIED | `OnZoomCamera + OnPinchMod + OnActivateMenusRequest + OnStoreRequest` |
| ui | `TextOverlayActionHandler` | `0x00B36DE0` | 3712 | VERIFIED | `audioFile\|` |
| ui | `GrowtorialButton` | `0x00CBDB50` | 4370 | VERIFIED | `Error with add_commnty_growtorial_bttn parms` |
| ui | `DialogBuilder` | `0x00CF8790` | 30966 | VERIFIED | `Error with add_searchable_item_list parms` |
| ui | `CaptchaInputDialog` | `0x00D07BE0` | 7496 | VERIFIED | `\|CaptchaID\|` |
| ui | `OnButtonSelectedHandler` | `0x00D0D830` | 4497 | VERIFIED | `OnButtonSelected` |
| ui | `BannerDialogBuilder` | `0x00D752B0` | 9568 | VERIFIED | `Error with add_banner parms` |
| ui | `Controller_PopController` | `0x00D89CC0` | 544 | VERIFIED | `Controller::PopController` |
| ui | `Controller_PushController` | `0x00D89EE0` | 721 | VERIFIED | `Controller::PushController` |
| ui | `Controller_Deactivate` | `0x00DC4F60` | 638 | VERIFIED | `Controller::Deactivate` |
| ui | `Controller_OnActivate` | `0x00DC5320` | 475 | VERIFIED | `Controller::OnActivate` |
| ui | `OnEventHandler` | `0x01060AD0` | 3202 | VERIFIED | `OnEvent` |
| ui | `Controller_PushChildController` | `0x01082530` | 690 | VERIFIED | `Controller::PushChildController` |
| ui | `InventoryTabUI` | `0x010A5C80` | 3392 | VERIFIED | `tabclothes\|` |
| ui | `UIController_OnActivate` | `0x010D7550` | 1512 | VERIFIED | `UIController::OnActivate` |
| ui | `UIController_OnDeactivate` | `0x010D7B40` | 622 | VERIFIED | `UIController::OnDeactivate` |
| ui | `UIController_RemoveScreenView` | `0x010D7DC0` | 1139 | VERIFIED | `UIController::RemoveScreenView` |
| ui | `OnOverMoveHandler` | `0x011B2EE0` | 5273 | VERIFIED | `OnOverMove` |
| ui | `EnableAllButtonsEntity` | `0x011D67B0` | 1526 | VERIFIED | `EnableAllButtonsEntity() nullptr == pEnt` |
| ui | `LogDisplayEntityBuilder` | `0x011DA3A0` | 2351 | VERIFIED | `LogDisplayEntity` |
| ui | `OnFakeScrollToEntity` | `0x01215620` | 4626 | VERIFIED | `OnFakeScrollToEntity` |
| world | `TileCoordinateHandler` | `0x009A6D00` | 228 | VERIFIED | `tileX == %d, tileY == %d` |
| world | `TileLookupGuard` | `0x009BE110` | 1184 | VERIFIED | `Error, no tile` |
| world | `TilesheetLoader` | `0x00A2AE20` | 832 | VERIFIED | `Error, tile(%d) haven't texture file` |
| world | `WorldLockText` | `0x00AEF240` | 13171 | VERIFIED | ` per World Lock` |
| world | `WorldVersionCheck` | `0x00B3A380` | 17672 | VERIFIED | `ERROR: Wrong world version: %d, dataSize %d` |
| world | `WeatherEffectText` | `0x00C01450` | 3273 | VERIFIED | `Replaces any other active Weather Effect.` |
| world | `TileDefinitionsLoader` | `0x00C28360` | 15833 | VERIFIED | `Please wait, loading tile definitions...` |
| world | `BgItemMapValidator` | `0x00C5BFA0` | 435 | VERIFIED | `Removing illegal bg item %d from map %s` |
| world | `TileExtraParser` | `0x00C6D090` | 23652 | VERIFIED | `Bad type of %d detected in tileextra. WorldName: %s` |
| world | `WorldTileMap` | `0x00C83460` | 1204 | VERIFIED | `WorldTileMap: size: %d, %d; count: %d` |
| world | `SeedTreeItemPath` | `0x00CE85D0` | 11101 | VERIFIED | `itemIDseed2tree_itemAmount` |
| world | `TilesheetPageLoader` | `0x00D09F90` | 1057 | VERIFIED | `Error loading tiles_page2.rttex` |
| world | `WorldValidation` | `0x010EDFF0` | 616 | VERIFIED | `Validing World Now %s` |
| world | `WhiteDoorLookup` | `0x0143A390` | 754 | VERIFIED | `White door missing from map %s` |
| world | `World_Load` | `0x0143AB90` | 1095 | VERIFIED | `World::Load: Version %d. f: %d, Name: %s` |

---

## Part 2 - Script-binding metadata (RmlUi + Lua)

The only true `{name -> address}` metadata in the binary: 16-byte `{const char* name, void* fn}` rows. Every row below has a function pointer landing exactly on a `.pdata` function start.

> Property tables store **bare** names (`attributes`, `x`) - the `get_`/`set_` spelling seen in write-ups is an annotation, not shipped data. Names are unique per table, not globally: `x` belongs to both `Vector2f` and `Vector2i`.

| Table | Method | Offset (RVA) |
| ----- | ------ | ------------ |
| `0x01DA26C0` | `_G` | `0x015C1FA0` |
| `0x01DA26C0` | `package` | `0x015CD360` |
| `0x01DA26C0` | `coroutine` | `0x015C2610` |
| `0x01DA26C0` | `table` | `0x015C3580` |
| `0x01DA26C0` | `io` | `0x015C4D90` |
| `0x01DA26C0` | `os` | `0x015C5980` |
| `0x01DA26C0` | `string` | `0x015C9900` |
| `0x01DA26C0` | `math` | `0x015CB0C0` |
| `0x01DA26C0` | `utf8` | `0x015CA260` |
| `0x01DA26C0` | `debug` | `0x015CC500` |
| `0x01DA3360` | `assert` | `0x015C0F30` |
| `0x01DA3360` | `collectgarbage` | `0x015C18E0` |
| `0x01DA3360` | `dofile` | `0x015C0EA0` |
| `0x01DA3360` | `error` | `0x015C15F0` |
| `0x01DA3360` | `getmetatable` | `0x015C1670` |
| `0x01DA3360` | `ipairs` | `0x015C1C60` |
| `0x01DA3360` | `loadfile` | `0x015C1CB0` |
| `0x01DA3360` | `load` | `0x015C0DA0` |
| `0x01DA3360` | `next` | `0x015C1B60` |
| `0x01DA3360` | `pairs` | `0x015C1BC0` |
| `0x01DA3360` | `pcall` | `0x015C10D0` |
| `0x01DA3360` | `print` | `0x015C1260` |
| `0x01DA3360` | `warn` | `0x015C1350` |
| `0x01DA3360` | `rawequal` | `0x015C1780` |
| `0x01DA3360` | `rawlen` | `0x015C17D0` |
| `0x01DA3360` | `rawget` | `0x015C1830` |
| `0x01DA3360` | `rawset` | `0x015C1880` |
| `0x01DA3360` | `select` | `0x015C1010` |
| `0x01DA3360` | `setmetatable` | `0x015C16D0` |
| `0x01DA3360` | `tonumber` | `0x015C1400` |
| `0x01DA3360` | `tostring` | `0x015C1230` |
| `0x01DA3360` | `type` | `0x015C1B00` |
| `0x01DA3360` | `xpcall` | `0x015C1170` |
| `0x01DA3790` | `create` | `0x015C20D0` |
| `0x01DA3790` | `resume` | `0x015C2020` |
| `0x01DA3790` | `running` | `0x015C22B0` |
| `0x01DA3790` | `status` | `0x015C21D0` |
| `0x01DA3790` | `wrap` | `0x015C2130` |
| `0x01DA3790` | `yield` | `0x015C21A0` |
| `0x01DA3790` | `isyieldable` | `0x015C2240` |
| `0x01DA3790` | `close` | `0x015C22E0` |
| `0x01DA3990` | `concat` | `0x015C2BC0` |
| `0x01DA3990` | `insert` | `0x015C2660` |
| `0x01DA3990` | `pack` | `0x015C2DF0` |
| `0x01DA3990` | `unpack` | `0x015C2EA0` |
| `0x01DA3990` | `remove` | `0x015C27F0` |
| `0x01DA3990` | `move` | `0x015C2970` |
| `0x01DA3990` | `sort` | `0x015C2F90` |
| `0x01DA3B20` | `close` | `0x015C3E20` |
| `0x01DA3B20` | `flush` | `0x015C3BD0` |
| `0x01DA3B20` | `input` | `0x015C35D0` |
| `0x01DA3B20` | `lines` | `0x015C3740` |
| `0x01DA3B20` | `open` | `0x015C3F10` |
| `0x01DA3B20` | `output` | `0x015C3660` |
| `0x01DA3B20` | `popen` | `0x015C4050` |
| `0x01DA3B20` | `read` | `0x015C3860` |
| `0x01DA3B20` | `tmpfile` | `0x015C4130` |
| `0x01DA3B20` | `type` | `0x015C3CE0` |
| `0x01DA3B20` | `write` | `0x015C3930` |
| `0x01DA3BE0` | `read` | `0x015C38D0` |
| `0x01DA3BE0` | `write` | `0x015C39A0` |
| `0x01DA3BE0` | `lines` | `0x015C36F0` |
| `0x01DA3BE0` | `flush` | `0x015C3C60` |
| `0x01DA3BE0` | `seek` | `0x015C3A10` |
| `0x01DA3BE0` | `close` | `0x015C3DB0` |
| `0x01DA3BE0` | `setvbuf` | `0x015C3B00` |
| `0x01DA3C70` | `__gc` | `0x015C3EB0` |
| `0x01DA3C70` | `__close` | `0x015C3EB0` |
| `0x01DA3C70` | `__tostring` | `0x015C3D50` |
| `0x01DA3FE0` | `clock` | `0x015C56F0` |
| `0x01DA3FE0` | `date` | `0x015C4FA0` |
| `0x01DA3FE0` | `difftime` | `0x015C53B0` |
| `0x01DA3FE0` | `execute` | `0x015C54F0` |
| `0x01DA3FE0` | `exit` | `0x015C5470` |
| `0x01DA3FE0` | `getenv` | `0x015C56B0` |
| `0x01DA3FE0` | `remove` | `0x015C5560` |
| `0x01DA3FE0` | `rename` | `0x015C55C0` |
| `0x01DA3FE0` | `setlocale` | `0x015C5400` |
| `0x01DA3FE0` | `time` | `0x015C5220` |
| `0x01DA3FE0` | `tmpname` | `0x015C5640` |
| `0x01DA4270` | `byte` | `0x015C5EA0` |
| `0x01DA4270` | `char` | `0x015C5FC0` |
| `0x01DA4270` | `dump` | `0x015C60A0` |
| `0x01DA42B0` | `format` | `0x015C65D0` |
| `0x01DA42B0` | `gmatch` | `0x015C6270` |
| `0x01DA42B0` | `gsub` | `0x015C6380` |
| `0x01DA42B0` | `len` | `0x015C59D0` |
| `0x01DA42B0` | `lower` | `0x015C5B90` |
| `0x01DA4310` | `rep` | `0x015C5D10` |
| `0x01DA4310` | `reverse` | `0x015C5AF0` |
| `0x01DA4310` | `sub` | `0x015C5A00` |
| `0x01DA4310` | `upper` | `0x015C5C50` |
| `0x01DA4310` | `pack` | `0x015C6E10` |
| `0x01DA4310` | `packsize` | `0x015C74E0` |
| `0x01DA4310` | `unpack` | `0x015C7680` |
| `0x01DA4960` | `offset` | `0x015C9E70` |
| `0x01DA4960` | `codepoint` | `0x015C9B40` |
| `0x01DA4960` | `char` | `0x015C9D50` |
| `0x01DA4960` | `len` | `0x015C99D0` |
| `0x01DA4960` | `codes` | `0x015C9FF0` |
| `0x01DA4A80` | `abs` | `0x015CA2E0` |
| `0x01DA4A80` | `acos` | `0x015CA410` |
| `0x01DA4A80` | `asin` | `0x015CA3E0` |
| `0x01DA4A80` | `atan` | `0x015CA440` |
| `0x01DA4A80` | `ceil` | `0x015CA580` |
| `0x01DA4A80` | `cos` | `0x015CA380` |
| `0x01DA4A80` | `deg` | `0x015CA950` |
| `0x01DA4A80` | `exp` | `0x015CA920` |
| `0x01DA4A80` | `tointeger` | `0x015CA4A0` |
| `0x01DA4A80` | `floor` | `0x015CA500` |
| `0x01DA4A80` | `fmod` | `0x015CA600` |
| `0x01DA4A80` | `ult` | `0x015CA810` |
| `0x01DA4A80` | `log` | `0x015CA860` |
| `0x01DA4A80` | `max` | `0x015CAA70` |
| `0x01DA4A80` | `min` | `0x015CA9D0` |
| `0x01DA4A80` | `modf` | `0x015CA700` |
| `0x01DA4A80` | `rad` | `0x015CA990` |
| `0x01DA4A80` | `sin` | `0x015CA350` |
| `0x01DA4A80` | `sqrt` | `0x015CA7D0` |
| `0x01DA4A80` | `tan` | `0x015CA3B0` |
| `0x01DA4A80` | `type` | `0x015CAB10` |
| `0x01DA4D00` | `debug` | `0x015CC160` |
| `0x01DA4D00` | `getuservalue` | `0x015CB2C0` |
| `0x01DA4D00` | `gethook` | `0x015CBFE0` |
| `0x01DA4D00` | `getinfo` | `0x015CB3C0` |
| `0x01DA4D00` | `getlocal` | `0x015CB850` |
| `0x01DA4D00` | `getregistry` | `0x015CB200` |
| `0x01DA4D00` | `getmetatable` | `0x015CB220` |
| `0x01DA4D00` | `getupvalue` | `0x015CBB40` |
| `0x01DA4D00` | `upvaluejoin` | `0x015CBCD0` |
| `0x01DA4D00` | `upvalueid` | `0x015CBC50` |
| `0x01DA4D00` | `setuservalue` | `0x015CB340` |
| `0x01DA4D00` | `sethook` | `0x015CBDF0` |
| `0x01DA4D00` | `setlocal` | `0x015CB9D0` |
| `0x01DA4D00` | `setmetatable` | `0x015CB260` |
| `0x01DA4D00` | `setupvalue` | `0x015CBBC0` |
| `0x01DA4D00` | `traceback` | `0x015CC350` |
| `0x01DA4D00` | `setcstacklimit` | `0x015CC420` |
| `0x02220860` | `CreateContext` | `0x01595720` |
| `0x02220860` | `LoadFontFace` | `0x01595840` |
| `0x02220860` | `RegisterTag` | `0x01595980` |
| `0x022208A0` | `contexts` | `0x01595A80` |
| `0x022208A0` | `key_identifier` | `0x01595AC0` |
| `0x022208A0` | `key_modifier` | `0x01595B00` |
| `0x022208E0` | `red` | `0x01597810` |
| `0x022208E0` | `green` | `0x01597860` |
| `0x022208E0` | `blue` | `0x015978B0` |
| `0x022208E0` | `alpha` | `0x01597900` |
| `0x022208E0` | `rgba` | `0x01597950` |
| `0x02220940` | `red` | `0x015979D0` |
| `0x02220940` | `green` | `0x01597A30` |
| `0x02220940` | `blue` | `0x01597A90` |
| `0x02220940` | `alpha` | `0x01597AF0` |
| `0x02220940` | `rgba` | `0x01597B50` |
| `0x022209A0` | `red` | `0x01598220` |
| `0x022209A0` | `green` | `0x01598270` |
| `0x022209A0` | `blue` | `0x015982C0` |
| `0x022209A0` | `alpha` | `0x01598310` |
| `0x022209A0` | `rgba` | `0x01598360` |
| `0x02220A00` | `red` | `0x015983F0` |
| `0x02220A00` | `green` | `0x01598460` |
| `0x02220A00` | `blue` | `0x015984D0` |
| `0x02220A00` | `alpha` | `0x01598540` |
| `0x02220A00` | `rgba` | `0x015985B0` |
| `0x02220A60` | `AddEventListener` | `0x01598F00` |
| `0x02220A60` | `CreateDocument` | `0x01599410` |
| `0x02220A60` | `LoadDocument` | `0x01599520` |
| `0x02220A60` | `Render` | `0x01599610` |
| `0x02220A60` | `UnloadAllDocuments` | `0x01599640` |
| `0x02220A60` | `UnloadDocument` | `0x01599660` |
| `0x02220A60` | `Update` | `0x015996A0` |
| `0x02220A60` | `OpenDataModel` | `0x01598AB0` |
| `0x02220A60` | `ProcessMouseMove` | `0x01598AF0` |
| `0x02220A60` | `ProcessMouseButtonDown` | `0x01598B70` |
| `0x02220A60` | `ProcessMouseButtonUp` | `0x01598BD0` |
| `0x02220A60` | `ProcessMouseWheel` | `0x01598C30` |
| `0x02220A60` | `ProcessMouseLeave` | `0x01598CA0` |
| `0x02220A60` | `IsMouseInteracting` | `0x01598CD0` |
| `0x02220A60` | `ProcessKeyDown` | `0x01598D00` |
| `0x02220A60` | `ProcessKeyUp` | `0x01598D60` |
| `0x02220A60` | `ProcessTextInput` | `0x01598DC0` |
| `0x02220B80` | `dimensions` | `0x015996D0` |
| `0x02220B80` | `documents` | `0x01599740` |
| `0x02220B80` | `dp_ratio` | `0x015997B0` |
| `0x02220B80` | `focus_element` | `0x015997F0` |
| `0x02220B80` | `hover_element` | `0x01599850` |
| `0x02220B80` | `name` | `0x015998B0` |
| `0x02220B80` | `root_element` | `0x01599910` |
| `0x02220C50` | `PullToFront` | `0x0159A5E0` |
| `0x02220C50` | `PushToBack` | `0x0159A600` |
| `0x02220C50` | `Show` | `0x0159A620` |
| `0x02220C50` | `Hide` | `0x0159A6A0` |
| `0x02220C50` | `Close` | `0x0159A6C0` |
| `0x02220C50` | `CreateElement` | `0x0159A6E0` |
| `0x02220C50` | `CreateTextNode` | `0x0159A850` |
| `0x02220D20` | `AddEventListener` | `0x0159B230` |
| `0x02220D20` | `AppendChild` | `0x0159B490` |
| `0x02220D20` | `Blur` | `0x0159B590` |
| `0x02220D20` | `Click` | `0x0159B5B0` |
| `0x02220D20` | `DispatchEvent` | `0x0159B5D0` |
| `0x02220D20` | `Focus` | `0x0159BB20` |
| `0x02220D20` | `GetAttribute` | `0x0159BB40` |
| `0x02220D20` | `GetElementById` | `0x0159BC30` |
| `0x02220D20` | `GetElementsByTagName` | `0x0159BD20` |
| `0x02220D20` | `QuerySelector` | `0x0159C030` |
| `0x02220D20` | `QuerySelectorAll` | `0x0159C120` |
| `0x02220D20` | `Matches` | `0x0159C430` |
| `0x02220D20` | `HasAttribute` | `0x0159C500` |
| `0x02220D20` | `HasChildNodes` | `0x0159C5D0` |
| `0x02220D20` | `InsertBefore` | `0x0159C600` |
| `0x02220D20` | `IsClassSet` | `0x0159C720` |
| `0x02220D20` | `RemoveAttribute` | `0x0159C7F0` |
| `0x02220D20` | `RemoveChild` | `0x0159C8B0` |
| `0x02220D20` | `ReplaceChild` | `0x0159C920` |
| `0x02220D20` | `ScrollIntoView` | `0x0159CA50` |
| `0x02220D20` | `SetAttribute` | `0x0159CA80` |
| `0x02220D20` | `SetClass` | `0x0159CBF0` |
| `0x02220E90` | `attributes` | `0x0159CCE0` |
| `0x02220E90` | `child_nodes` | `0x0159CD50` |
| `0x02220E90` | `class_name` | `0x0159CDC0` |
| `0x02220E90` | `client_left` | `0x0159CE80` |
| `0x02220E90` | `client_height` | `0x0159CEE0` |
| `0x02220E90` | `client_top` | `0x0159CF40` |
| `0x02220E90` | `client_width` | `0x0159CFA0` |
| `0x02220E90` | `first_child` | `0x0159D000` |
| `0x02220E90` | `id` | `0x0159D060` |
| `0x02220E90` | `inner_rml` | `0x0159D0C0` |
| `0x02220E90` | `last_child` | `0x0159D170` |
| `0x02220E90` | `next_sibling` | `0x0159D1D0` |
| `0x02220E90` | `offset_height` | `0x0159D230` |
| `0x02220E90` | `offset_left` | `0x0159D290` |
| `0x02220E90` | `offset_parent` | `0x0159D2F0` |
| `0x02220E90` | `offset_top` | `0x0159D350` |
| `0x02220E90` | `offset_width` | `0x0159D3B0` |
| `0x02220E90` | `owner_document` | `0x0159D410` |
| `0x02220E90` | `parent_node` | `0x0159D470` |
| `0x02220E90` | `previous_sibling` | `0x0159D4D0` |
| `0x02220E90` | `scroll_height` | `0x0159D530` |
| `0x02220E90` | `scroll_left` | `0x0159D590` |
| `0x02220E90` | `scroll_top` | `0x0159D5F0` |
| `0x02220E90` | `scroll_width` | `0x0159D650` |
| `0x02220E90` | `style` | `0x0159D6B0` |
| `0x02220E90` | `tag_name` | `0x0159D720` |
| `0x02221040` | `class_name` | `0x0159D780` |
| `0x02221040` | `id` | `0x0159D870` |
| `0x02221040` | `inner_rml` | `0x0159D960` |
| `0x02221040` | `scroll_left` | `0x0159DA60` |
| `0x02221040` | `scroll_top` | `0x0159DAD0` |
| `0x02221170` | `current_element` | `0x0159FA80` |
| `0x02221170` | `type` | `0x0159FAE0` |
| `0x02221170` | `target_element` | `0x0159FCC0` |
| `0x02221170` | `parameters` | `0x0159FD20` |
| `0x022211C0` | `DotProduct` | `0x015A0AB0` |
| `0x022211C0` | `Normalise` | `0x015A0B20` |
| `0x022211C0` | `Rotate` | `0x015A0BD0` |
| `0x02221200` | `x` | `0x015A0CA0` |
| `0x02221200` | `y` | `0x015A0CF0` |
| `0x02221200` | `magnitude` | `0x015A0D40` |
| `0x02221270` | `x` | `0x015A15A0` |
| `0x02221270` | `y` | `0x015A15F0` |
| `0x02221270` | `magnitude` | `0x015A1640` |
| `0x02221300` | `disabled` | `0x015A2170` |
| `0x02221300` | `name` | `0x015A21C0` |
| `0x02221300` | `value` | `0x015A2270` |
| `0x02221340` | `disabled` | `0x015A2330` |
| `0x02221340` | `name` | `0x015A23A0` |
| `0x02221340` | `value` | `0x015A2490` |
| `0x02221380` | `Select` | `0x015A28E0` |
| `0x02221380` | `SetSelection` | `0x015A2900` |
| `0x02221380` | `GetSelection` | `0x015A2950` |
| `0x022213C0` | `checked` | `0x015A2A30` |
| `0x022213C0` | `maxlength` | `0x015A2B20` |
| `0x022213C0` | `size` | `0x015A2C20` |
| `0x022213C0` | `max` | `0x015A2D10` |
| `0x022213C0` | `min` | `0x015A2E00` |
| `0x022213C0` | `step` | `0x015A2EF0` |
| `0x02221430` | `checked` | `0x015A2FE0` |
| `0x02221430` | `maxlength` | `0x015A3140` |
| `0x02221430` | `size` | `0x015A3240` |
| `0x02221430` | `max` | `0x015A3330` |
| `0x02221430` | `min` | `0x015A3430` |
| `0x02221430` | `step` | `0x015A3530` |
| `0x022214A0` | `Add` | `0x015A3B10` |
| `0x022214A0` | `Remove` | `0x015A3CC0` |
| `0x022214A0` | `RemoveAll` | `0x015A3E10` |
| `0x02221530` | `Select` | `0x015A4370` |
| `0x02221530` | `SetSelection` | `0x015A4390` |
| `0x02221530` | `GetSelection` | `0x015A43E0` |
| `0x02221570` | `cols` | `0x015A44C0` |
| `0x02221570` | `maxlength` | `0x015A4510` |
| `0x02221570` | `rows` | `0x015A4560` |
| `0x02221570` | `wordwrap` | `0x015A45B0` |
| `0x022215C0` | `cols` | `0x015A4600` |
| `0x022215C0` | `maxlength` | `0x015A4660` |
| `0x022215C0` | `rows` | `0x015A46C0` |
| `0x022215C0` | `wordwrap` | `0x015A4720` |

---

## Small Info

**These RVAs are per-build.** Growtopia re-randomises layout on every update, so they must be re-derived each time - which is what this repo automates. Never hardcode them; re-read this file after each release.

I Wish they could fix bots bruh
