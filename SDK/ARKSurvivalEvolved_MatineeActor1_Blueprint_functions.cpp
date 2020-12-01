// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MatineeActor1_Blueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MatineeActor1_Blueprint.MatineeActor1_Blueprint_C.UserConstructionScript
// ()

void AMatineeActor1_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MatineeActor1_Blueprint.MatineeActor1_Blueprint_C.UserConstructionScript");

	AMatineeActor1_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatineeActor1_Blueprint.MatineeActor1_Blueprint_C.ExecuteUbergraph_MatineeActor1_Blueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMatineeActor1_Blueprint_C::ExecuteUbergraph_MatineeActor1_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MatineeActor1_Blueprint.MatineeActor1_Blueprint_C.ExecuteUbergraph_MatineeActor1_Blueprint");

	AMatineeActor1_Blueprint_C_ExecuteUbergraph_MatineeActor1_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
