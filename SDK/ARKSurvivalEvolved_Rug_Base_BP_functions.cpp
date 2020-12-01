// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Rug_Base_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Rug_Base_BP.Rug_Base_BP_C.UserConstructionScript
// ()

void ARug_Base_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rug_Base_BP.Rug_Base_BP_C.UserConstructionScript");

	ARug_Base_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rug_Base_BP.Rug_Base_BP_C.ExecuteUbergraph_Rug_Base_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARug_Base_BP_C::ExecuteUbergraph_Rug_Base_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rug_Base_BP.Rug_Base_BP_C.ExecuteUbergraph_Rug_Base_BP");

	ARug_Base_BP_C_ExecuteUbergraph_Rug_Base_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
