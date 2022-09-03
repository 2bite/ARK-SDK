// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SE_DinoColorSet_Jerboa_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SE_DinoColorSet_Jerboa.SE_DinoColorSet_Jerboa_C.ExecuteUbergraph_SE_DinoColorSet_Jerboa
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USE_DinoColorSet_Jerboa_C::ExecuteUbergraph_SE_DinoColorSet_Jerboa(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SE_DinoColorSet_Jerboa.SE_DinoColorSet_Jerboa_C.ExecuteUbergraph_SE_DinoColorSet_Jerboa");

	USE_DinoColorSet_Jerboa_C_ExecuteUbergraph_SE_DinoColorSet_Jerboa_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
