// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_ThatchFloor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_ThatchFloor.EngramEntry_ThatchFloor_C.ExecuteUbergraph_EngramEntry_ThatchFloor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_ThatchFloor_C::ExecuteUbergraph_EngramEntry_ThatchFloor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_ThatchFloor.EngramEntry_ThatchFloor_C.ExecuteUbergraph_EngramEntry_ThatchFloor");

	UEngramEntry_ThatchFloor_C_ExecuteUbergraph_EngramEntry_ThatchFloor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
