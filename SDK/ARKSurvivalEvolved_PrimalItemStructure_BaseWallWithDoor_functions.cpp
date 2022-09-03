// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_BaseWallWithDoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_BaseWallWithDoor.PrimalItemStructure_BaseWallWithDoor_C.NewFunction_1
// ()

void UPrimalItemStructure_BaseWallWithDoor_C::NewFunction_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_BaseWallWithDoor.PrimalItemStructure_BaseWallWithDoor_C.NewFunction_1");

	UPrimalItemStructure_BaseWallWithDoor_C_NewFunction_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemStructure_BaseWallWithDoor.PrimalItemStructure_BaseWallWithDoor_C.ExecuteUbergraph_PrimalItemStructure_BaseWallWithDoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_BaseWallWithDoor_C::ExecuteUbergraph_PrimalItemStructure_BaseWallWithDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_BaseWallWithDoor.PrimalItemStructure_BaseWallWithDoor_C.ExecuteUbergraph_PrimalItemStructure_BaseWallWithDoor");

	UPrimalItemStructure_BaseWallWithDoor_C_ExecuteUbergraph_PrimalItemStructure_BaseWallWithDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
