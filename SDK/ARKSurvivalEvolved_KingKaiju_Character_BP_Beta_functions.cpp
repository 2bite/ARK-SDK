// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_KingKaiju_Character_BP_Beta_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KingKaiju_Character_BP_Beta.KingKaiju_Character_BP_Beta_C.UserConstructionScript
// ()

void AKingKaiju_Character_BP_Beta_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP_Beta.KingKaiju_Character_BP_Beta_C.UserConstructionScript");

	AKingKaiju_Character_BP_Beta_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_Character_BP_Beta.KingKaiju_Character_BP_Beta_C.ExecuteUbergraph_KingKaiju_Character_BP_Beta
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_Character_BP_Beta_C::ExecuteUbergraph_KingKaiju_Character_BP_Beta(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_BP_Beta.KingKaiju_Character_BP_Beta_C.ExecuteUbergraph_KingKaiju_Character_BP_Beta");

	AKingKaiju_Character_BP_Beta_C_ExecuteUbergraph_KingKaiju_Character_BP_Beta_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
