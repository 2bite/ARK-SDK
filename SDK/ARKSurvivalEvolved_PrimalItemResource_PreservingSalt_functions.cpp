// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_PreservingSalt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_PreservingSalt.PrimalItemResource_PreservingSalt_C.ExecuteUbergraph_PrimalItemResource_PreservingSalt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_PreservingSalt_C::ExecuteUbergraph_PrimalItemResource_PreservingSalt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_PreservingSalt.PrimalItemResource_PreservingSalt_C.ExecuteUbergraph_PrimalItemResource_PreservingSalt");

	UPrimalItemResource_PreservingSalt_C_ExecuteUbergraph_PrimalItemResource_PreservingSalt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
