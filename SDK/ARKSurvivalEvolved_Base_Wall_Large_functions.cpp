// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Base_Wall_Large_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Base_Wall_Large.Base_Wall_Large_C.UserConstructionScript
// ()

void ABase_Wall_Large_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Wall_Large.Base_Wall_Large_C.UserConstructionScript");

	ABase_Wall_Large_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Wall_Large.Base_Wall_Large_C.ExecuteUbergraph_Base_Wall_Large
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABase_Wall_Large_C::ExecuteUbergraph_Base_Wall_Large(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Wall_Large.Base_Wall_Large_C.ExecuteUbergraph_Base_Wall_Large");

	ABase_Wall_Large_C_ExecuteUbergraph_Base_Wall_Large_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
