// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_GreenhouseDoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_GreenhouseDoor.EngramEntry_GreenhouseDoor_C.ExecuteUbergraph_EngramEntry_GreenhouseDoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_GreenhouseDoor_C::ExecuteUbergraph_EngramEntry_GreenhouseDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_GreenhouseDoor.EngramEntry_GreenhouseDoor_C.ExecuteUbergraph_EngramEntry_GreenhouseDoor");

	UEngramEntry_GreenhouseDoor_C_ExecuteUbergraph_EngramEntry_GreenhouseDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
