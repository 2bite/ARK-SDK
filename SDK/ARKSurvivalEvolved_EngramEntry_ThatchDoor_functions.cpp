// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_ThatchDoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_ThatchDoor.EngramEntry_ThatchDoor_C.ExecuteUbergraph_EngramEntry_ThatchDoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_ThatchDoor_C::ExecuteUbergraph_EngramEntry_ThatchDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_ThatchDoor.EngramEntry_ThatchDoor_C.ExecuteUbergraph_EngramEntry_ThatchDoor");

	UEngramEntry_ThatchDoor_C_ExecuteUbergraph_EngramEntry_ThatchDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
