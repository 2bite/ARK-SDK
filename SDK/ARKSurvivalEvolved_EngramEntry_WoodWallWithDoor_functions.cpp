// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_WoodWallWithDoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_WoodWallWithDoor.EngramEntry_WoodWallWithDoor_C.ExecuteUbergraph_EngramEntry_WoodWallWithDoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_WoodWallWithDoor_C::ExecuteUbergraph_EngramEntry_WoodWallWithDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_WoodWallWithDoor.EngramEntry_WoodWallWithDoor_C.ExecuteUbergraph_EngramEntry_WoodWallWithDoor");

	UEngramEntry_WoodWallWithDoor_C_ExecuteUbergraph_EngramEntry_WoodWallWithDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
