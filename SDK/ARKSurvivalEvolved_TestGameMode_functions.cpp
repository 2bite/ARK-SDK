// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TestGameMode_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TestGameMode.TestGameMode_C.BPPreSpawnedDino
// ()
// Parameters:
// class APrimalDinoCharacter**   theDino                        (Parm, ZeroConstructor, IsPlainOldData)

void ATestGameMode_C::BPPreSpawnedDino(class APrimalDinoCharacter** theDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function TestGameMode.TestGameMode_C.BPPreSpawnedDino");

	ATestGameMode_C_BPPreSpawnedDino_Params params;
	params.theDino = theDino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TestGameMode.TestGameMode_C.UserConstructionScript
// ()

void ATestGameMode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TestGameMode.TestGameMode_C.UserConstructionScript");

	ATestGameMode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TestGameMode.TestGameMode_C.ExecuteUbergraph_TestGameMode
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATestGameMode_C::ExecuteUbergraph_TestGameMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TestGameMode.TestGameMode_C.ExecuteUbergraph_TestGameMode");

	ATestGameMode_C_ExecuteUbergraph_TestGameMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
