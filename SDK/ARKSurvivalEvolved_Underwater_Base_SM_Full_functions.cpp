// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Underwater_Base_SM_Full_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Underwater_Base_SM_Full.Underwater_Base_SM_Full_C.UserConstructionScript
// ()

void AUnderwater_Base_SM_Full_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Underwater_Base_SM_Full.Underwater_Base_SM_Full_C.UserConstructionScript");

	AUnderwater_Base_SM_Full_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Underwater_Base_SM_Full.Underwater_Base_SM_Full_C.ExecuteUbergraph_Underwater_Base_SM_Full
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AUnderwater_Base_SM_Full_C::ExecuteUbergraph_Underwater_Base_SM_Full(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Underwater_Base_SM_Full.Underwater_Base_SM_Full_C.ExecuteUbergraph_Underwater_Base_SM_Full");

	AUnderwater_Base_SM_Full_C_ExecuteUbergraph_Underwater_Base_SM_Full_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
