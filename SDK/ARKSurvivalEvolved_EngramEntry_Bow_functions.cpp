// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Bow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Bow.EngramEntry_Bow_C.ExecuteUbergraph_EngramEntry_Bow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Bow_C::ExecuteUbergraph_EngramEntry_Bow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Bow.EngramEntry_Bow_C.ExecuteUbergraph_EngramEntry_Bow");

	UEngramEntry_Bow_C_ExecuteUbergraph_EngramEntry_Bow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
