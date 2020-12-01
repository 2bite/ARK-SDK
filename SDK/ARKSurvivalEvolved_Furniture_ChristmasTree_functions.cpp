// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Furniture_ChristmasTree_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Furniture_ChristmasTree.Furniture_ChristmasTree_C.UserConstructionScript
// ()

void AFurniture_ChristmasTree_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Furniture_ChristmasTree.Furniture_ChristmasTree_C.UserConstructionScript");

	AFurniture_ChristmasTree_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Furniture_ChristmasTree.Furniture_ChristmasTree_C.ReceiveBeginPlay
// ()

void AFurniture_ChristmasTree_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Furniture_ChristmasTree.Furniture_ChristmasTree_C.ReceiveBeginPlay");

	AFurniture_ChristmasTree_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Furniture_ChristmasTree.Furniture_ChristmasTree_C.ExecuteUbergraph_Furniture_ChristmasTree
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFurniture_ChristmasTree_C::ExecuteUbergraph_Furniture_ChristmasTree(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Furniture_ChristmasTree.Furniture_ChristmasTree_C.ExecuteUbergraph_Furniture_ChristmasTree");

	AFurniture_ChristmasTree_C_ExecuteUbergraph_Furniture_ChristmasTree_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
