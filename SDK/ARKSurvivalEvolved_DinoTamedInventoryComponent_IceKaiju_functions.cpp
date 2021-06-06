// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_IceKaiju_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_IceKaiju.DinoTamedInventoryComponent_IceKaiju_C.ExecuteUbergraph_DinoTamedInventoryComponent_IceKaiju
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_IceKaiju_C::ExecuteUbergraph_DinoTamedInventoryComponent_IceKaiju(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_IceKaiju.DinoTamedInventoryComponent_IceKaiju_C.ExecuteUbergraph_DinoTamedInventoryComponent_IceKaiju");

	UDinoTamedInventoryComponent_IceKaiju_C_ExecuteUbergraph_DinoTamedInventoryComponent_IceKaiju_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
