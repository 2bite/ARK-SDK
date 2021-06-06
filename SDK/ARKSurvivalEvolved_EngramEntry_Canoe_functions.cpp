// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Canoe_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Canoe.EngramEntry_Canoe_C.ExecuteUbergraph_EngramEntry_Canoe
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Canoe_C::ExecuteUbergraph_EngramEntry_Canoe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Canoe.EngramEntry_Canoe_C.ExecuteUbergraph_EngramEntry_Canoe");

	UEngramEntry_Canoe_C_ExecuteUbergraph_EngramEntry_Canoe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
