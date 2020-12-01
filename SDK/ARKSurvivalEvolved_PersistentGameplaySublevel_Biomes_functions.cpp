// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PersistentGameplaySublevel_Biomes_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PersistentGameplaySublevel_Biomes.PersistentGameplaySublevel_Biomes_C.ExecuteUbergraph_PersistentGameplaySublevel_Biomes
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APersistentGameplaySublevel_Biomes_C::ExecuteUbergraph_PersistentGameplaySublevel_Biomes(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PersistentGameplaySublevel_Biomes.PersistentGameplaySublevel_Biomes_C.ExecuteUbergraph_PersistentGameplaySublevel_Biomes");

	APersistentGameplaySublevel_Biomes_C_ExecuteUbergraph_PersistentGameplaySublevel_Biomes_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
