// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MapSpawnPoint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MapSpawnPoint.MapSpawnPoint_C.Get_Default__MapSpawnPoint_C_Visiblity_1
// ()
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UMapSpawnPoint_C::Get_Default__MapSpawnPoint_C_Visiblity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapSpawnPoint.MapSpawnPoint_C.Get_Default__MapSpawnPoint_C_Visiblity_1");

	UMapSpawnPoint_C_Get_Default__MapSpawnPoint_C_Visiblity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MapSpawnPoint.MapSpawnPoint_C.ExecuteUbergraph_MapSpawnPoint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMapSpawnPoint_C::ExecuteUbergraph_MapSpawnPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapSpawnPoint.MapSpawnPoint_C.ExecuteUbergraph_MapSpawnPoint");

	UMapSpawnPoint_C_ExecuteUbergraph_MapSpawnPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
