// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Saddle_TerrorBird_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_TerrorBird.EngramEntry_Saddle_TerrorBird_C.ExecuteUbergraph_EngramEntry_Saddle_TerrorBird
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_TerrorBird_C::ExecuteUbergraph_EngramEntry_Saddle_TerrorBird(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_TerrorBird.EngramEntry_Saddle_TerrorBird_C.ExecuteUbergraph_EngramEntry_Saddle_TerrorBird");

	UEngramEntry_Saddle_TerrorBird_C_ExecuteUbergraph_EngramEntry_Saddle_TerrorBird_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
