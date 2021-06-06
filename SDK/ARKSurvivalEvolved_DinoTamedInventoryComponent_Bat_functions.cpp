// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Bat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Bat.DinoTamedInventoryComponent_Bat_C.ExecuteUbergraph_DinoTamedInventoryComponent_Bat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Bat_C::ExecuteUbergraph_DinoTamedInventoryComponent_Bat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Bat.DinoTamedInventoryComponent_Bat_C.ExecuteUbergraph_DinoTamedInventoryComponent_Bat");

	UDinoTamedInventoryComponent_Bat_C_ExecuteUbergraph_DinoTamedInventoryComponent_Bat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
