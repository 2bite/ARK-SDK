// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MoleRat_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MoleRat_AIController_BP.MoleRat_AIController_BP_C.UserConstructionScript
// ()

void AMoleRat_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_AIController_BP.MoleRat_AIController_BP_C.UserConstructionScript");

	AMoleRat_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoleRat_AIController_BP.MoleRat_AIController_BP_C.ExecuteUbergraph_MoleRat_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMoleRat_AIController_BP_C::ExecuteUbergraph_MoleRat_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoleRat_AIController_BP.MoleRat_AIController_BP_C.ExecuteUbergraph_MoleRat_AIController_BP");

	AMoleRat_AIController_BP_C_ExecuteUbergraph_MoleRat_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
