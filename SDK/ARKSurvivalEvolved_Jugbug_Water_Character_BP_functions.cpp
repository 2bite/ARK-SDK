// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Jugbug_Water_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Jugbug_Water_Character_BP.Jugbug_Water_Character_BP_C.UserConstructionScript
// ()

void AJugbug_Water_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Jugbug_Water_Character_BP.Jugbug_Water_Character_BP_C.UserConstructionScript");

	AJugbug_Water_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jugbug_Water_Character_BP.Jugbug_Water_Character_BP_C.ExecuteUbergraph_Jugbug_Water_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AJugbug_Water_Character_BP_C::ExecuteUbergraph_Jugbug_Water_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Jugbug_Water_Character_BP.Jugbug_Water_Character_BP_C.ExecuteUbergraph_Jugbug_Water_Character_BP");

	AJugbug_Water_Character_BP_C_ExecuteUbergraph_Jugbug_Water_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
