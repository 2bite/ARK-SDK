// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Tent_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Tent.EngramEntry_Tent_C.ExecuteUbergraph_EngramEntry_Tent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Tent_C::ExecuteUbergraph_EngramEntry_Tent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Tent.EngramEntry_Tent_C.ExecuteUbergraph_EngramEntry_Tent");

	UEngramEntry_Tent_C_ExecuteUbergraph_EngramEntry_Tent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
