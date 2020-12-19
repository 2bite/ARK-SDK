// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_ThatchWallWithDoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_ThatchWallWithDoor.EngramEntry_ThatchWallWithDoor_C.ExecuteUbergraph_EngramEntry_ThatchWallWithDoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_ThatchWallWithDoor_C::ExecuteUbergraph_EngramEntry_ThatchWallWithDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_ThatchWallWithDoor.EngramEntry_ThatchWallWithDoor_C.ExecuteUbergraph_EngramEntry_ThatchWallWithDoor");

	UEngramEntry_ThatchWallWithDoor_C_ExecuteUbergraph_EngramEntry_ThatchWallWithDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
