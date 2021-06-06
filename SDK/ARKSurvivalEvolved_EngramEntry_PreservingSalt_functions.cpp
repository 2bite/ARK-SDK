// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_PreservingSalt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_PreservingSalt.EngramEntry_PreservingSalt_C.ExecuteUbergraph_EngramEntry_PreservingSalt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_PreservingSalt_C::ExecuteUbergraph_EngramEntry_PreservingSalt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_PreservingSalt.EngramEntry_PreservingSalt_C.ExecuteUbergraph_EngramEntry_PreservingSalt");

	UEngramEntry_PreservingSalt_C_ExecuteUbergraph_EngramEntry_PreservingSalt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
