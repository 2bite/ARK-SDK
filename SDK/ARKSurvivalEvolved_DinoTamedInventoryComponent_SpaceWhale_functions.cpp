// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_SpaceWhale_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_SpaceWhale.DinoTamedInventoryComponent_SpaceWhale_C.ExecuteUbergraph_DinoTamedInventoryComponent_SpaceWhale
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_SpaceWhale_C::ExecuteUbergraph_DinoTamedInventoryComponent_SpaceWhale(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_SpaceWhale.DinoTamedInventoryComponent_SpaceWhale_C.ExecuteUbergraph_DinoTamedInventoryComponent_SpaceWhale");

	UDinoTamedInventoryComponent_SpaceWhale_C_ExecuteUbergraph_DinoTamedInventoryComponent_SpaceWhale_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
