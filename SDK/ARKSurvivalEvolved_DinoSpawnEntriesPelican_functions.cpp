// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSpawnEntriesPelican_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntriesPelican.DinoSpawnEntriesPelican_C.ExecuteUbergraph_DinoSpawnEntriesPelican
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesPelican_C::ExecuteUbergraph_DinoSpawnEntriesPelican(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesPelican.DinoSpawnEntriesPelican_C.ExecuteUbergraph_DinoSpawnEntriesPelican");

	UDinoSpawnEntriesPelican_C_ExecuteUbergraph_DinoSpawnEntriesPelican_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
