// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Tusoteuthis_AIController_BP_Caves_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tusoteuthis_AIController_BP_Caves.Tusoteuthis_AIController_BP_Caves_C.UserConstructionScript
// ()

void ATusoteuthis_AIController_BP_Caves_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_AIController_BP_Caves.Tusoteuthis_AIController_BP_Caves_C.UserConstructionScript");

	ATusoteuthis_AIController_BP_Caves_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tusoteuthis_AIController_BP_Caves.Tusoteuthis_AIController_BP_Caves_C.ExecuteUbergraph_Tusoteuthis_AIController_BP_Caves
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATusoteuthis_AIController_BP_Caves_C::ExecuteUbergraph_Tusoteuthis_AIController_BP_Caves(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tusoteuthis_AIController_BP_Caves.Tusoteuthis_AIController_BP_Caves_C.ExecuteUbergraph_Tusoteuthis_AIController_BP_Caves");

	ATusoteuthis_AIController_BP_Caves_C_ExecuteUbergraph_Tusoteuthis_AIController_BP_Caves_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
