// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Rug_Shag_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Rug_Shag_BP.Rug_Shag_BP_C.UserConstructionScript
// ()

void ARug_Shag_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rug_Shag_BP.Rug_Shag_BP_C.UserConstructionScript");

	ARug_Shag_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rug_Shag_BP.Rug_Shag_BP_C.ExecuteUbergraph_Rug_Shag_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARug_Shag_BP_C::ExecuteUbergraph_Rug_Shag_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rug_Shag_BP.Rug_Shag_BP_C.ExecuteUbergraph_Rug_Shag_BP");

	ARug_Shag_BP_C_ExecuteUbergraph_Rug_Shag_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
