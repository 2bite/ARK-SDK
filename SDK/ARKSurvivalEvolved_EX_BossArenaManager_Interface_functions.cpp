// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EX_BossArenaManager_Interface_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EX_BossArenaManager_Interface.EX_BossArenaManager_Interface_C.CallEvent_PlayKaijuSecondPhaseMusic
// ()
// Parameters:
// class APrimalDinoCharacter*    Kaiju                          (Parm, ZeroConstructor, IsPlainOldData)

void UEX_BossArenaManager_Interface_C::CallEvent_PlayKaijuSecondPhaseMusic(class APrimalDinoCharacter* Kaiju)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossArenaManager_Interface.EX_BossArenaManager_Interface_C.CallEvent_PlayKaijuSecondPhaseMusic");

	UEX_BossArenaManager_Interface_C_CallEvent_PlayKaijuSecondPhaseMusic_Params params;
	params.Kaiju = Kaiju;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EX_BossArenaManager_Interface.EX_BossArenaManager_Interface_C.Call Event Kaiju Despawned
// ()
// Parameters:
// class APrimalDinoCharacter*    Kaiju                          (Parm, ZeroConstructor, IsPlainOldData)

void UEX_BossArenaManager_Interface_C::Call_Event_Kaiju_Despawned(class APrimalDinoCharacter* Kaiju)
{
	static auto fn = UObject::FindObject<UFunction>("Function EX_BossArenaManager_Interface.EX_BossArenaManager_Interface_C.Call Event Kaiju Despawned");

	UEX_BossArenaManager_Interface_C_Call_Event_Kaiju_Despawned_Params params;
	params.Kaiju = Kaiju;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
