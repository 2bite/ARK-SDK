// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_GiantTurtle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_GiantTurtle.DinoTamedInventoryComponent_GiantTurtle_C.ExecuteUbergraph_DinoTamedInventoryComponent_GiantTurtle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_GiantTurtle_C::ExecuteUbergraph_DinoTamedInventoryComponent_GiantTurtle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_GiantTurtle.DinoTamedInventoryComponent_GiantTurtle_C.ExecuteUbergraph_DinoTamedInventoryComponent_GiantTurtle");

	UDinoTamedInventoryComponent_GiantTurtle_C_ExecuteUbergraph_DinoTamedInventoryComponent_GiantTurtle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
