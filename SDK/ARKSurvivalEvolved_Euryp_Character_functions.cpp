// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Euryp_Character_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Euryp_Character.Euryp_Character_C.UserConstructionScript
// ()

void AEuryp_Character_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Euryp_Character.Euryp_Character_C.UserConstructionScript");

	AEuryp_Character_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Euryp_Character.Euryp_Character_C.ExecuteUbergraph_Euryp_Character
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEuryp_Character_C::ExecuteUbergraph_Euryp_Character(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Euryp_Character.Euryp_Character_C.ExecuteUbergraph_Euryp_Character");

	AEuryp_Character_C_ExecuteUbergraph_Euryp_Character_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
