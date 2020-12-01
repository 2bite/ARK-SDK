// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_GiantTurtle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_GiantTurtle.DinoColorSet_GiantTurtle_C.ExecuteUbergraph_DinoColorSet_GiantTurtle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_GiantTurtle_C::ExecuteUbergraph_DinoColorSet_GiantTurtle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_GiantTurtle.DinoColorSet_GiantTurtle_C.ExecuteUbergraph_DinoColorSet_GiantTurtle");

	UDinoColorSet_GiantTurtle_C_ExecuteUbergraph_DinoColorSet_GiantTurtle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
