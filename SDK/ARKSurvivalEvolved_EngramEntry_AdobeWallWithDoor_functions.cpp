// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_AdobeWallWithDoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_AdobeWallWithDoor.EngramEntry_AdobeWallWithDoor_C.ExecuteUbergraph_EngramEntry_AdobeWallWithDoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_AdobeWallWithDoor_C::ExecuteUbergraph_EngramEntry_AdobeWallWithDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_AdobeWallWithDoor.EngramEntry_AdobeWallWithDoor_C.ExecuteUbergraph_EngramEntry_AdobeWallWithDoor");

	UEngramEntry_AdobeWallWithDoor_C_ExecuteUbergraph_EngramEntry_AdobeWallWithDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
