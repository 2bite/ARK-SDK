// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_IceJumper_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_IceJumper.DinoTamedInventoryComponent_IceJumper_C.ExecuteUbergraph_DinoTamedInventoryComponent_IceJumper
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_IceJumper_C::ExecuteUbergraph_DinoTamedInventoryComponent_IceJumper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_IceJumper.DinoTamedInventoryComponent_IceJumper_C.ExecuteUbergraph_DinoTamedInventoryComponent_IceJumper");

	UDinoTamedInventoryComponent_IceJumper_C_ExecuteUbergraph_DinoTamedInventoryComponent_IceJumper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
