// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_OilVein_Base_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OilVein_Base_BP.OilVein_Base_BP_C.UserConstructionScript
// ()

void AOilVein_Base_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function OilVein_Base_BP.OilVein_Base_BP_C.UserConstructionScript");

	AOilVein_Base_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OilVein_Base_BP.OilVein_Base_BP_C.ExecuteUbergraph_OilVein_Base_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AOilVein_Base_BP_C::ExecuteUbergraph_OilVein_Base_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OilVein_Base_BP.OilVein_Base_BP_C.ExecuteUbergraph_OilVein_Base_BP");

	AOilVein_Base_BP_C_ExecuteUbergraph_OilVein_Base_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
