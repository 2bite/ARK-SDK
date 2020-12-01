// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_StoneWallWithDoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_StoneWallWithDoor.EngramEntry_StoneWallWithDoor_C.ExecuteUbergraph_EngramEntry_StoneWallWithDoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_StoneWallWithDoor_C::ExecuteUbergraph_EngramEntry_StoneWallWithDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_StoneWallWithDoor.EngramEntry_StoneWallWithDoor_C.ExecuteUbergraph_EngramEntry_StoneWallWithDoor");

	UEngramEntry_StoneWallWithDoor_C_ExecuteUbergraph_EngramEntry_StoneWallWithDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
