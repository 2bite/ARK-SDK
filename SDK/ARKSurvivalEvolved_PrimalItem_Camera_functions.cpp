// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_Camera_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_Camera.PrimalItem_Camera_C.ExecuteUbergraph_PrimalItem_Camera
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_Camera_C::ExecuteUbergraph_PrimalItem_Camera(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Camera.PrimalItem_Camera_C.ExecuteUbergraph_PrimalItem_Camera");

	UPrimalItem_Camera_C_ExecuteUbergraph_PrimalItem_Camera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
