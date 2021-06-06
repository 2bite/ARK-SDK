// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IceKaiju_Character_BP_Interface_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IceKaiju_Character_BP_Interface.IceKaiju_Character_BP_Interface_C.SetVar_IKArenaManager
// ()
// Parameters:
// class AActor*                  ArenaManager                   (Parm, ZeroConstructor, IsPlainOldData)

void UIceKaiju_Character_BP_Interface_C::SetVar_IKArenaManager(class AActor* ArenaManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP_Interface.IceKaiju_Character_BP_Interface_C.SetVar_IKArenaManager");

	UIceKaiju_Character_BP_Interface_C_SetVar_IKArenaManager_Params params;
	params.ArenaManager = ArenaManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_Character_BP_Interface.IceKaiju_Character_BP_Interface_C.CallFunc_StunKaiju
// ()

void UIceKaiju_Character_BP_Interface_C::CallFunc_StunKaiju()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_Character_BP_Interface.IceKaiju_Character_BP_Interface_C.CallFunc_StunKaiju");

	UIceKaiju_Character_BP_Interface_C_CallFunc_StunKaiju_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
