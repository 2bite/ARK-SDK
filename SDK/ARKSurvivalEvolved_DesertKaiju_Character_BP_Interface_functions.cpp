// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DesertKaiju_Character_BP_Interface_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DesertKaiju_Character_BP_Interface.DesertKaiju_Character_BP_Interface_C.SetVar_DKArenaManager
// ()
// Parameters:
// class AActor*                  ArenaManager                   (Parm, ZeroConstructor, IsPlainOldData)

void UDesertKaiju_Character_BP_Interface_C::SetVar_DKArenaManager(class AActor* ArenaManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP_Interface.DesertKaiju_Character_BP_Interface_C.SetVar_DKArenaManager");

	UDesertKaiju_Character_BP_Interface_C_SetVar_DKArenaManager_Params params;
	params.ArenaManager = ArenaManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_Character_BP_Interface.DesertKaiju_Character_BP_Interface_C.CallFunc_StunKaiju
// ()

void UDesertKaiju_Character_BP_Interface_C::CallFunc_StunKaiju()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_Character_BP_Interface.DesertKaiju_Character_BP_Interface_C.CallFunc_StunKaiju");

	UDesertKaiju_Character_BP_Interface_C_CallFunc_StunKaiju_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
